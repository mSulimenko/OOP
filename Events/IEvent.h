#ifndef UNTITLED_IEVENT_H
#define UNTITLED_IEVENT_H


#include "../Game_logic/Player.h"
#include "iostream"
class Field;

class IEvent{
public:
    virtual int react(Player* player, Field* field) = 0;
};
#endif //UNTITLED_IEVENT_H
