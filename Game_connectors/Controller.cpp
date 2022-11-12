#include "Controller.h"

Controller::Controller(Player* player, Field* field){
this->player = player;
this->field = field;
}

int Controller::get_future_x(int move_direction){
    int player_x_copy = player->get_position_x();
    switch (move_direction) {
        case(Right):
            player_x_copy++;
            if (player_x_copy > field->get_field_size_x()-1) player_x_copy = 0;
            break;
        case(Left):
            player_x_copy--;
            if (player_x_copy < 0) player_x_copy = field->get_field_size_x()-1;
            break;
        default:
            break;
    }
    return player_x_copy;
}

int Controller::get_future_y(int move_direction) {

    int player_y_copy = player->get_position_y();
    switch (move_direction){
        case(Up):
            player_y_copy--;
            if (player_y_copy < 0) player_y_copy = field->get_field_size_y()-1;
            break;
        case(Down):
            player_y_copy++;
            if (player_y_copy > field->get_field_size_y()-1) player_y_copy = 0;
            break;
        default:
            break;
    }
    return player_y_copy;
}



void Controller::make_event(int x, int y, int move_direction){

    if(field->get_field_link()[y][x].get_event()!= nullptr){
        field->get_field_link()[y][x].get_event()->react(player, field, &field->get_field_link()[y][x]);
        player->set_event_happened(true);
        if(field->get_field_link()[y][x].is_passable()){
            field->get_field_link()[y][x].set_event(nullptr);
            make_move(move_direction);
            player->set_is_moved(true);
        }
        else{
            player->set_is_moved(true);
            player->tryed_passable(true);
        }
    }
    else {
        make_move(move_direction);
        player->set_is_moved(true);
    }
    if ( (player->get_health() <=0) or (player->get_win()) or (player->is_player_dead())){
        player->set_end_of_game(true);
    }
}



void Controller::make_move(int move_direction){
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_player(false);
    switch (move_direction) {
        case(Up):
            player->set_position_y(player->get_position_y()-1);
            if (player->get_position_y() < 0) player->set_position_y(field->get_field_size_y()-1);
            break;
        case(Right):
            player->set_position_x(player->get_position_x()+1);
            if (player->get_position_x() > field->get_field_size_x()-1) player->set_position_x(0);
            break;
        case(Down):
            player->set_position_y(player->get_position_y()+1);
            if (player->get_position_y() > field->get_field_size_y()-1) player->set_position_y(0);
            break;
        case(Left):
            player->set_position_x(player->get_position_x()-1);
            if (player->get_position_x() < 0) player->set_position_x(field->get_field_size_x()-1);
            break;
        default:
            break;
    }
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_player(true);
}
