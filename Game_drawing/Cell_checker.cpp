
#include "Cell_checker.h"


Heal* CellChecker::is_heal(IEvent* event) {
    Heal *new_event = dynamic_cast<Heal*>(event);
    return new_event;
}

Trap *CellChecker::is_trap(IEvent* event) {
    Trap* new_event = dynamic_cast<Trap*>(event);
    return new_event;
}

Gun *CellChecker::is_gun(IEvent* event) {
    Gun* new_event = dynamic_cast<Gun*>(event);
    return new_event;
}

Key *CellChecker::is_key(IEvent* event) {
    Key* new_event = dynamic_cast<Key*>(event);
    return new_event;
}

Enemy *CellChecker::is_enemy(IEvent* event) {
    Enemy* new_event = dynamic_cast<Enemy*>(event);
    return new_event;
}

Exit *CellChecker::is_exit(IEvent* event) {
    Exit* new_event = dynamic_cast<Exit*>(event);
    return new_event;
}

Wall *CellChecker::is_wall(IEvent* event) {
    Wall* new_event = dynamic_cast<Wall*>(event);
    return new_event;
}

Empty *CellChecker::is_empty(IEvent* event) {
    Empty* new_event = dynamic_cast<Empty*>(event);
    return new_event;
}