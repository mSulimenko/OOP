#ifndef UNTITLED_RULE_WALL_H
#define UNTITLED_RULE_WALL_H
#include "../Game_logic/Field.h"

template<size_t count>
class Rule_Wall {
public:
    void create(Field& field);
};

template<size_t count>
void Rule_Wall<count>::create(Field& field)
{
    for (int k = 0; k < count; k++) {
        field.add_wall();
    }
}

#endif //UNTITLED_RULE_WALL_H
