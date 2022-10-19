#ifndef UNTITLED_CONTROLLER_H
#define UNTITLED_CONTROLLER_H
#define MOVE_DIRECTION_UP 10
#define MOVE_DIRECTION_RIGHT 11
#define MOVE_DIRECTION_DOWN 12
#define MOVE_DIRECTION_LEFT 13
#include "../Game_logic/Field.h"
#include "../Game_logic/Player.h"


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

 //   Cell *future_cell(int move_direction);
};
#endif //UNTITLED_CONTROLLER_H
