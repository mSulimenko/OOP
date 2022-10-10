#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H
#define CELL_SIZE 32
#define FIELD_CELL_TYPE_PLAYER 1
#define FIELD_CELL_TYPE_NONE 0
#define FIELD_CELL_TYPE_WALL (-1)

class Cell{
private:
    int type;

public:
    Cell();
    Cell(int type_number);
    void set_type(int type_number);
    int get_type();
};

#endif //UNTITLED_CELL_H
