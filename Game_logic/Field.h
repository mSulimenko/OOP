#ifndef UNTITLED_FIELD_H
#define UNTITLED_FIELD_H
#include <iostream>
#include <vector>
#include "Cell.h"
#include "../Events/EventsLinks.h"


using cell_matrix = std::vector<std::vector<Cell>>;

class Field{
private:
    int field_size_x;
    int field_size_y;
    cell_matrix field;
    EventsLinks* events_links;
public:
    Field();
    Field(int field_size_x, int field_size_y);
    Field(const Field &other);
    Field& operator=(const Field &other);
    Field(Field&& other);

    Field& operator=(Field&& other);

    void create_field();

    int get_field_size_x();

    int get_field_size_y();

    cell_matrix &get_field_link();

    void clear_field();

    int get_random_empty_cell();

    void add_wall();

    void add_heal();
    void add_key();
    void add_trap();
    void add_gun();
    void add_exit();
    void add_enemy();


};

#endif //UNTITLED_FIELD_H