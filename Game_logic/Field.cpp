#include "Field.h"


Field::Field(){
    this->field_size_x = 40;
    this->field_size_y = 25;
    events_links = new EventsLinks;
}

Field::Field(int field_size_x, int field_size_y) {
    if((field_size_x<= 0) || (field_size_y <=0)){
        std::cout<<"Field sizes must be greater, than zero. They were set to default values";
        this->field_size_x = 40;
        this->field_size_y = 25;
    }
    else{
        this->field_size_x = field_size_x;
        this->field_size_y = field_size_y;
    }
    create_field();
    clear_field();
    events_links = new EventsLinks;
}
Field::Field(const Field &other){
    this->field_size_x = other.field_size_x;
    this->field_size_y = other.field_size_y;
    for (size_t i = 0; i < field_size_y; i++) {
        field.push_back(other.field[i]);
    }
}
Field& Field::operator=(const Field &other){
    if(this!=&other){
        field.clear();
        this->field_size_x = other.field_size_x;
        this->field_size_y = other.field_size_y;

        for (size_t i = 0; i < field_size_y; i++) {
            field.push_back(other.field[i]);
        }
    }
    return *this;
}

Field::Field(Field&& other){
    std::swap(field_size_x, other.field_size_x);
    std::swap(field_size_y, other.field_size_y);
    std::swap(field, other.field);
}

Field& Field::operator=(Field&& other){
    if(this!=&other){
        std::swap(field_size_x, other.field_size_x);
        std::swap(field_size_y, other.field_size_y);
        std::swap(field, other.field);
    }
    return *this;
}


void Field::create_field() {
    for (size_t i = 0; i < field_size_y; i++) {
        field.push_back(std::vector<Cell>());
        for (size_t j = 0; j < field_size_x; j++) {
            field.back().emplace_back();
        }
    }
}

int Field::get_field_size_x() {
    return field_size_x;
}

int Field::get_field_size_y(){
    return field_size_y;
}

cell_matrix& Field::get_field_link(){
    return field;
}

void Field::clear_field(){
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            field[i][j].set_event(nullptr);
        }
    }
}

int Field::get_random_empty_cell(){
    int empty_cell_count = 0;
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            if((field[i][j].get_event() == nullptr) and (!field[i][j].is_player_here())){
                empty_cell_count++;
            }
        }
    }
    if(empty_cell_count==0) return -1;
    int target_empty_cell_index = rand() % empty_cell_count;
    int empty_cell_index = 0;
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            if((field[i][j].get_event() == nullptr) and (!field[i][j].is_player_here())){
                if(empty_cell_index == target_empty_cell_index){
                    return i * field_size_x + j;
                }
                empty_cell_index++;
            }
        }
    }
    return -1;
}

bool Field::add_wall(){
    int wall_position = get_random_empty_cell();
    if(wall_position != -1){
        field[wall_position / field_size_x][wall_position % field_size_x].set_event(events_links->get_wall());
        field[wall_position / field_size_x][wall_position % field_size_x].set_passable(false);
        return true;
    }
    else {
        return false;
    }
}

void Field::add_heal() {
    int heal_position = get_random_empty_cell();
    if(heal_position != -1){
        field[heal_position / field_size_x][heal_position % field_size_x].set_event(events_links->get_heal());
    }
}

void Field::add_trap() {
    int trap_position = get_random_empty_cell();
    if(trap_position != -1){
        field[trap_position / field_size_x][trap_position % field_size_x].set_event(events_links->get_trap());
    }
}

void Field::add_gun() {
    int gun_position = get_random_empty_cell();
    if(gun_position != -1){
        field[gun_position / field_size_x][gun_position % field_size_x].set_event(events_links->get_gun());
    }
}

void Field::add_key() {
    int key_position = get_random_empty_cell();
    if(key_position != -1){
        field[key_position / field_size_x][key_position % field_size_x].set_event(events_links->get_key());
    }
}

void Field::add_exit() {
    int exit_position = get_random_empty_cell();
    if(exit_position != -1){
        field[exit_position / field_size_x][exit_position % field_size_x].set_event(events_links->get_exit());
    }
}

void Field::add_enemy() {
    int enemy_position = get_random_empty_cell();
    if(enemy_position != -1){
        field[enemy_position / field_size_x][enemy_position % field_size_x].set_passable(false);
        field[enemy_position / field_size_x][enemy_position % field_size_x].set_event(events_links->get_enemy());
    }
}

EventsLinks *Field::get_event_links() {
    return this->events_links;
}
