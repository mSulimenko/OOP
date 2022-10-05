#include "Controller.h"

Controller::Controller(Player* player, Field* field){
this->player = player;
this->field = field;
}
int Controller::get_future_object_type(int move_direction){
    int future_object_type = FIELD_CELL_TYPE_PLAYER;
    int player_x_copy = player->get_position_x();
    int player_y_copy = player->get_position_y();
    switch (move_direction) {
        case(MOVE_DIRECTION_UP):
            player_y_copy--;
            if (player_y_copy < 0) player_y_copy = field->get_field_size_y()-1;
            future_object_type = field->get_field_link()[player_y_copy][player_x_copy].get_type();
            break;
        case(MOVE_DIRECTION_RIGHT):
            player_x_copy++;
            if (player_x_copy > field->get_field_size_x()-1) player_x_copy = 0;
            future_object_type = field->get_field_link()[player_y_copy][player_x_copy].get_type();
            break;
        case(MOVE_DIRECTION_DOWN):
            player_y_copy++;
            if (player_y_copy > field->get_field_size_y()-1) player_y_copy = 0;
            future_object_type = field->get_field_link()[player_y_copy][player_x_copy].get_type();
            break;
        case(MOVE_DIRECTION_LEFT):
            player_x_copy--;
            if (player_x_copy < 0) player_x_copy = field->get_field_size_x()-1;
            future_object_type = field->get_field_link()[player_y_copy][player_x_copy].get_type();
            break;
    }
    return future_object_type;
}

void Controller::make_move(int move_direction){
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_type(FIELD_CELL_TYPE_NONE);
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
    field->get_field_link()[player->get_position_y()][player->get_position_x()].set_type(FIELD_CELL_TYPE_PLAYER);
}