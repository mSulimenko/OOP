#include "Controller.h"

Controller::Controller(Player* player, Field* field){
this->player = player;
this->field = field;
}

int Controller::get_future_x(int move_direction){
    int player_x_copy = player->get_position_x();
    switch (move_direction) {
        case(MOVE_DIRECTION_RIGHT):
            player_x_copy++;
            if (player_x_copy > field->get_field_size_x()-1) player_x_copy = 0;
            break;
        case(MOVE_DIRECTION_LEFT):
            player_x_copy--;
            if (player_x_copy < 0) player_x_copy = field->get_field_size_x()-1;
            break;
    }
    return player_x_copy;
}

int Controller::get_future_y(int move_direction) {

    int player_y_copy = player->get_position_y();
    switch (move_direction){
        case(MOVE_DIRECTION_UP):
            player_y_copy--;
            if (player_y_copy < 0) player_y_copy = field->get_field_size_y()-1;
            break;
        case(MOVE_DIRECTION_DOWN):
            player_y_copy++;
            if (player_y_copy > field->get_field_size_y()-1) player_y_copy = 0;

            break;
    }
    return player_y_copy;
}



void Controller::make_event(int x, int y, int move_direction){

    if(field->get_field_link()[y][x].get_event()!= nullptr){
        if(field->get_field_link()[y][x].get_event()->react(player, field)){
            field->get_field_link()[y][x].set_event(nullptr);
            make_move(move_direction);
        }
    }
    else {
        make_move(move_direction);
    }
    if ( (player->get_health() <=0) or (player->get_win()) or (player->is_player_dead())){
        player->set_end_of_game(true);
    }
}





void Controller::make_move(int move_direction){
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_player(false);
    switch (move_direction) {
        case(MOVE_DIRECTION_UP):
            player->set_position_y(player->get_position_y()-1);
            if (player->get_position_y() < 0) player->set_position_y(field->get_field_size_y()-1);
            break;
        case(MOVE_DIRECTION_RIGHT):
            player->set_position_x(player->get_position_x()+1);
            if (player->get_position_x() > field->get_field_size_x()-1) player->set_position_x(0);
            break;
        case(MOVE_DIRECTION_DOWN):
            player->set_position_y(player->get_position_y()+1);
            if (player->get_position_y() > field->get_field_size_y()-1) player->set_position_y(0);
            break;
        case(MOVE_DIRECTION_LEFT):
            player->set_position_x(player->get_position_x()-1);
            if (player->get_position_x() < 0) player->set_position_x(field->get_field_size_x()-1);
            break;
    }
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_player(true);
}

//Cell* Controller::future_cell(int move_direction){
//    Cell* future_cell = &field->get_field_link()[player->get_position_y()][player->get_position_x()];
//    int player_x_copy = player->get_position_x();
//    int player_y_copy = player->get_position_y();
//    switch (move_direction) {
//        case(MOVE_DIRECTION_UP):
//            player_y_copy--;
//            if (player_y_copy < 0) player_y_copy = field->get_field_size_y()-1;
//            future_cell = &field->get_field_link()[player_y_copy][player_x_copy];
//            break;
//        case(MOVE_DIRECTION_RIGHT):
//            player_x_copy++;
//            if (player_x_copy > field->get_field_size_x()-1) player_x_copy = 0;
//            future_cell = &field->get_field_link()[player_y_copy][player_x_copy];
//            break;
//        case(MOVE_DIRECTION_DOWN):
//            player_y_copy++;
//            if (player_y_copy > field->get_field_size_y()-1) player_y_copy = 0;
//            future_cell = &field->get_field_link()[player_y_copy][player_x_copy];
//            break;
//        case(MOVE_DIRECTION_LEFT):
//            player_x_copy--;
//            if (player_x_copy < 0) player_x_copy = field->get_field_size_x()-1;
//            future_cell = &field->get_field_link()[player_y_copy][player_x_copy];
//            break;
//    }
//    return future_cell;
//}

