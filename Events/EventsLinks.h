#ifndef UNTITLED_EVENTSLINKS_H
#define UNTITLED_EVENTSLINKS_H
#include "../Events/EventsPlayer/Heal.h"
#include "../Events/EventsPlayer/Trap.h"
#include "../Events/EventsPlayer/Gun.h"
#include "../Events/EventsPlayer/Key.h"
#include "../Events/EventsField/Enemy.h"
#include "../Events/EventsField/Exit.h"
#include "../Events/EventsPlayer/Wall.h"
#include "../Events/EventsPlayer/Empty.h"

class EventsLinks{
private:
    Heal* heal;
    Trap* trap;
    Gun* gun;
    Key* key;
    Enemy* enemy;
    Exit* exit;
    Wall* wall;
    Empty* empty;
public:
    EventsLinks(){
        this->heal = new Heal;
        this->trap = new Trap;
        this->gun = new Gun;
        this->key = new Key;
        this->exit = new Exit;
        this->wall = new Wall;
        this->empty = new Empty;
        this->enemy = new Enemy;
    }

    Heal* get_heal();
    Trap* get_trap();
    Gun* get_gun();
    Key* get_key();
    Enemy* get_enemy();
    Exit* get_exit();
    Wall* get_wall();
    Empty* get_empty();

};
#endif //UNTITLED_EVENTSLINKS_H
