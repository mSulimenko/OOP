#include "CommandReader.h"

//Тут возможно нужно реализовать конструктор

void CommandReader::read_from_keyboard(){
    int flag = 0;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        move_direction = MOVE_DIRECTION_UP;
        flag = 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        move_direction = MOVE_DIRECTION_RIGHT;
        flag = 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        move_direction = MOVE_DIRECTION_DOWN;
        flag = 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        move_direction = MOVE_DIRECTION_LEFT;
        flag = 1;
    }
    if(flag == 1){

        switch(get_future_object_type(move_direction)){
            case(FIELD_CELL_TYPE_NONE):
                make_move(move_direction);
                break;
            case (FIELD_CELL_TYPE_WALL):
                break;

        }
    }
}
