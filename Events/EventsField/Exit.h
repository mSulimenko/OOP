//
// Created by Max on 12.10.2022.
//

#ifndef UNTITLED_EXIT_H
#define UNTITLED_EXIT_H
#include "EventsField.h"

class Exit: public EventsField{
public:
    void react(Player* player, Field* field) override;
};
#endif //UNTITLED_EXIT_H
