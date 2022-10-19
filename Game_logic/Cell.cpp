#include "Cell.h"


Cell::Cell(){
    event = new Empty;
    is_player = false;
}


void Cell::set_event(IEvent* even){
    this->event = even;
}

IEvent *Cell::get_event() {
    return event;
}


Cell::Cell(const Cell &other) {
    this->event = other.event;
}

Cell &Cell::operator=(const Cell &other) {
    if(this!=&other){
        this->event = other.event;

    }
    return *this;
}

Cell::Cell(Cell&& other){
    std::swap(event, other.event);
}

Cell& Cell::operator=(Cell&& other){
    if(this!=&other){
        std::swap(event, other.event);
    }
    return *this;
}

bool Cell::is_player_here() {
    return is_player;
}

void Cell::set_player(bool place) {
    this->is_player = place;
}

Empty *Cell::is_empty() {
    Empty* new_event = dynamic_cast<Empty*>(event);
    return new_event;
}