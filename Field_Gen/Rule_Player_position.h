#ifndef UNTITLED_RULE_PLAYER_POSITION_H
#define UNTITLED_RULE_PLAYER_POSITION_H
#include "../Game_logic/Field.h"

template<int player_position_y, int player_position_x>
class Rule_Player_Position{
public:
    void create(Field& field);
};

template<int player_position_y, int player_position_x>
void Rule_Player_Position<player_position_y, player_position_x>::create(Field& field) {
    field.get_field_link()[player_position_y][player_position_x].set_player(true);
}
#endif //UNTITLED_RULE_PLAYER_POSITION_H
