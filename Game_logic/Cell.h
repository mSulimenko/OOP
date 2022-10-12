#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H
#define CELL_SIZE 32
#define FIELD_CELL_TYPE_PLAYER 1
#define FIELD_CELL_TYPE_NONE 0
#define FIELD_CELL_TYPE_WALL (-1)


#include "../Events/EventsPlayer/Heal.h"
#include "../Events/EventsPlayer/Trap.h"
#include "../Events/EventsPlayer/Gun.h"
#include "../Events/EventsPlayer/Key.h"
#include "../Events/EventsField/Enemy.h"
#include "../Events/EventsField/Exit.h"




class Cell{
private:
    int type;
    IEvent* event = nullptr;


public:
    Cell();
    Cell(int type_number);
    Cell(const Cell &other);
    Cell& operator=(const Cell &other);
    Cell(Cell&& other);

    Cell& operator=(Cell&& other);

    void set_type(int type_number);
    int get_type();

    void set_event(IEvent *even);
    IEvent* get_event();

    void new_heal();
    Heal* is_heal();

    void new_trap();
    Trap* is_trap();

    void new_gun();
    Gun* is_gun();

    void new_key();
    Key* is_key();

    void new_enemy();
    Enemy* is_enemy();

    void new_exit();
    Exit* is_exit();
};

#endif //UNTITLED_CELL_H