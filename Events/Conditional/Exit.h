//
// Created by Max on 10.10.2022.
//

#ifndef UNTITLED_EXIT_H
#define UNTITLED_EXIT_H
#pragma once
#include "Conditional.h"

class Exit: public Conditional{
    void react(Player& player) final;
    void apply(Player& player) final;
};


#endif //UNTITLED_EXIT_H
