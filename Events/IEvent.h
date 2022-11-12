#ifndef UNTITLED_IEVENT_H
#define UNTITLED_IEVENT_H


#include "../Game_logic/Player.h"
#include "iostream"
class Field;
class Cell;

class IEvent{
public:
    virtual void react(Player* player, Field* field, Cell* cell) = 0;
};
#endif //UNTITLED_IEVENT_H
