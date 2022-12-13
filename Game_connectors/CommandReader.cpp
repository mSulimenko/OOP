#include "CommandReader.h"


void CommandReader::read_from_keyboard(){

    if(_kbhit()) {
        char c = _getch();
        if ( c == mediator->get_comand_up()){
            move_direction = Up;
        }
        if ( c == mediator->get_comand_right()) {
            move_direction = Right;
        }
        if ( c ==mediator->get_comand_down()) {
            move_direction = Down;
        }
        if (c == mediator->get_comand_left()) {
            move_direction = Left;
        }

        int x = get_future_x(move_direction); int y = get_future_y(move_direction);
        make_event(x, y, move_direction);
        move_direction = Stop;
    }
}
