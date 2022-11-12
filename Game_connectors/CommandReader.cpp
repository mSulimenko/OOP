#include "CommandReader.h"


void CommandReader::read_from_keyboard(){

    if(_kbhit()) {
        char c = _getch();
        if ( c == commands[Up]){
            move_direction = Up;
        }
        if ( c == commands[Right]) {
            move_direction = Right;
        }
        if ( c ==commands[Down]) {
            move_direction = Down;
        }
        if (c == commands[Left]) {
            move_direction = Left;
        }

//            case ('w'):
//                move_direction = MOVE_DIRECTION_UP;
//                break;
//            case ('d') :
//                move_direction = MOVE_DIRECTION_RIGHT;
//                break;
//            case ('s') :
//                move_direction = MOVE_DIRECTION_DOWN;
//                break;
//            case ('a') :
//                move_direction = MOVE_DIRECTION_LEFT;
//                break;
//            default:
//                break;
//        }
        int x = get_future_x(move_direction); int y = get_future_y(move_direction);
        make_event(x, y, move_direction);
        move_direction = Stop;
    }
}
