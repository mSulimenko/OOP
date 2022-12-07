//
// Created by Max on 07.12.2022.
//

#ifndef UNTITLED_RULE_GUN_H
#define UNTITLED_RULE_GUN_H
#include "../Game_logic/Field.h"

template<size_t count>
class Rule_Gun {
public:
    void create(Field& field);
};

template<size_t count>
void Rule_Gun<count>::create(Field& field)
{
    for (int k = 0; k < count; k++) {
        field.add_gun();
    }
}
#endif //UNTITLED_RULE_GUN_H
