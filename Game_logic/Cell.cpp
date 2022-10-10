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
