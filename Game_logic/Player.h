#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "Field.h"

class Player{
private:
    int health;
    int strength;
    int keys;
    int position_y, position_x;
    bool death;
public:

    Player() = default;
    Player(Field* field);

    void set_death();
    bool is_player_dead();

    int get_position_x();
    int get_position_y();
    void set_position_x(int x);
    void set_position_y(int y);

    int get_health();
    void increase_health();
    void decrease_health();
    void increase_strength();
    int get_strength();

    void increase_keys();
    int get_keys();
};

#endif //UNTITLED_PLAYER_H
