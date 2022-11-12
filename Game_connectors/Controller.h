#ifndef UNTITLED_CONTROLLER_H
#define UNTITLED_CONTROLLER_H
#include "../Game_logic/Field.h"
#include "../Game_logic/Player.h"

enum Moves{Up, Down, Left, Right, Stop};

class Controller{
private:
    Player* player;
    Field* field;
public:
    Controller(Player* player, Field* field);
    void make_move(int move_direction);

    void make_event(int x, int y, int move_direction);

    int get_future_x(int move_direction);
    int get_future_y(int move_direction);


};
#endif //UNTITLED_CONTROLLER_H
