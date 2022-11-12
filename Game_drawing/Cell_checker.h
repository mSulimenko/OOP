
#ifndef UNTITLED_CELL_CHECKER_H
#define UNTITLED_CELL_CHECKER_H
#include "../Game_logic/Cell.h"
class CellChecker{
public:

    Heal* is_heal(IEvent* event);


    Trap* is_trap(IEvent* event);


    Gun* is_gun(IEvent* event);


    Key* is_key(IEvent* event);


    Enemy* is_enemy(IEvent* event);


    Exit* is_exit(IEvent* event);


    Wall* is_wall(IEvent* event);


    Empty * is_empty(IEvent* event);
};
#endif //UNTITLED_CELL_CHECKER_H
