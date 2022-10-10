#ifndef UNTITLED_EVENT_H
#define UNTITLED_EVENT_H
#include "../Game_logic/Player.h"

class Event{
public:
    virtual void react(Player& player) = 0;
    virtual void apply(Player& player) = 0;
};
#endif //UNTITLED_EVENT_H
