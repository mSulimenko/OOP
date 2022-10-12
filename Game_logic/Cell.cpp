#include "Cell.h"


Cell::Cell(){
    type = FIELD_CELL_TYPE_NONE;
}
Cell::Cell(int type_number){
    type = type_number;
}
void Cell::set_type(int type_number) {
    type = type_number;
}
int Cell::get_type(){
    return type;
}
void Cell::set_event(IEvent* even){
    this->event = even;
}

IEvent *Cell::get_event() {
    return event;
}

void Cell::new_heal(){
    event = new Heal();
}

Heal* Cell::is_heal() {
    Heal *new_event = dynamic_cast<Heal*>(event);
    return new_event;
}

void Cell::new_trap() {
    event = new Trap;
}

Trap *Cell::is_trap() {
    Trap* new_event = dynamic_cast<Trap*>(event);
    return new_event;
}

void Cell::new_gun() {
    event = new Gun;
}

Gun *Cell::is_gun() {
    Gun* new_event = dynamic_cast<Gun*>(event);
    return new_event;
}

void Cell::new_key() {
    event = new Key;
}

Key *Cell::is_key() {
    Key* new_event = dynamic_cast<Key*>(event);
    return new_event;
}

void Cell::new_enemy() {
    event = new Enemy;
}

Enemy *Cell::is_enemy() {
    Enemy* new_event = dynamic_cast<Enemy*>(event);
    return new_event;
}

void Cell::new_exit() {
    event = new Exit;
}

Exit *Cell::is_exit() {
    Exit* new_event = dynamic_cast<Exit*>(event);
    return new_event;
}

Cell::Cell(const Cell &other) {
    this->type = other.type;
    this->event = other.event;
}

Cell &Cell::operator=(const Cell &other) {
    if(this!=&other){
        this->event = other.event;
        this->type = other.type;

    }
    return *this;
}

Cell::Cell(Cell&& other){
    std::swap(event, other.event);
    std::swap(type, other.type);
}

Cell& Cell::operator=(Cell&& other){
    if(this!=&other){
        std::swap(event, other.event);
        std::swap(type, other.type);
    }
    return *this;
}
