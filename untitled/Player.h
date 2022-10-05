#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
#include "Field.h"

class Player{
private:
    int health = 10;
    int armor =  10;
    int mana = 10;
    int position_y, position_x;
public:

    Player(Field* field);

    int get_position_x();
    int get_position_y();
    void set_position_x(int x);
    void set_position_y(int y);
};

#endif //UNTITLED_PLAYER_H
