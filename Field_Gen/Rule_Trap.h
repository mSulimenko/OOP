//
// Created by Max on 07.12.2022.
//

#ifndef UNTITLED_RULE_TRAP_H
#define UNTITLED_RULE_TRAP_H
#include "../Game_logic/Field.h"

template<size_t count>
class Rule_Trap {
public:
    void create(Field& field);
};

template<size_t count>
void Rule_Trap<count>::create(Field& field)
{
    for (int k = 0; k < count; k++) {
        field.add_trap();
    }
}
#endif //UNTITLED_RULE_TRAP_H
