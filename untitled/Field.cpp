#include "Field.h"

typedef std::vector<std::vector<Cell>> cell_matrix;



Field::Field(){
    this->field_size_x = 40;
    this->field_size_y = 30;
}

Field::Field(int field_size_x, int field_size_y) {
    this->field_size_x = field_size_x;
    this->field_size_y = field_size_y;

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
            field.back().emplace_back(0);
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
            field[i][j].set_type(0);
        }
    }
    field[field_size_y/2][field_size_x/2].set_type(FIELD_CELL_TYPE_PLAYER);

    for(int i = 0; i < field_size_x * field_size_y / 8; i++){
        add_wall();
    }
}

int Field::get_random_empty_cell(){
    int empty_cell_count = 0;
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            if(field[i][j].get_type() == FIELD_CELL_TYPE_NONE){
                empty_cell_count++;
            }
        }
    }
    int target_empty_cell_index = rand() % empty_cell_count;
    int empty_cell_index = 0;
    for(int i = 0; i < field_size_y; i++){
        for(int j = 0; j < field_size_x; j++){
            if(field[i][j].get_type() == FIELD_CELL_TYPE_NONE){
                if(empty_cell_index == target_empty_cell_index){
                    return i * field_size_x + j;
                }
                empty_cell_index++;
            }
        }
    }
    return -1;
}

void Field::add_wall(){
    int wall_position = get_random_empty_cell();
    if(wall_position != -1){
        field[wall_position / field_size_x][wall_position % field_size_x].set_type(FIELD_CELL_TYPE_WALL);
    }

}
