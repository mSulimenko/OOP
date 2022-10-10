#include "CommandReader.h"


void CommandReader::read_from_keyboard(){
    if(_kbhit()) {
        switch (_getch()) {
            case ('w'):
                move_direction = MOVE_DIRECTION_UP;
                break;
            case ('d') :
                move_direction = MOVE_DIRECTION_RIGHT;
                break;
            case ('s') :
                move_direction = MOVE_DIRECTION_DOWN;
                break;
            case ('a') :
                move_direction = MOVE_DIRECTION_LEFT;
                break;
            default:
                break;
        }
        switch (get_future_object_type(move_direction)) {
            case (FIELD_CELL_TYPE_NONE):
                make_move(move_direction);
                break;
            case (FIELD_CELL_TYPE_WALL):
                break;
        }

    }
}
