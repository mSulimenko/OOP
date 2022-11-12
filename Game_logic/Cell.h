#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H
#define CELL_SIZE 32


#include "../Events/EventsPlayer/Heal.h"
#include "../Events/EventsPlayer/Trap.h"
#include "../Events/EventsPlayer/Gun.h"
#include "../Events/EventsPlayer/Key.h"
#include "../Events/EventsField/Enemy.h"
#include "../Events/EventsField/Exit.h"
#include "../Events/EventsPlayer/Wall.h"
#include "../Events/EventsPlayer/Empty.h"



class Cell{
private:
    bool is_player = false;
    bool passable = true;
    IEvent* event;


public:
    Cell();
    Cell(const Cell &other);
    Cell& operator=(const Cell &other);
    Cell(Cell&& other);

    Cell& operator=(Cell&& other);

    bool is_player_here();
    void set_player(bool place);

    void set_event(IEvent *even);
    IEvent* get_event();

    Empty* is_empty();

    void set_passable(bool pass);

    bool is_passable();
};

#endif //UNTITLED_CELL_H