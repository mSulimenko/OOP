#include "ComandsMediator.h"
#include "ComandsHandler.h"


void ComandsMediator::set_comands(std::string new_comands) {
    this->comands_string = new_comands;
}

char ComandsMediator::get_comand_up() {
    return comands_map[Up];
}

char ComandsMediator::get_comand_down() {
    return comands_map[Down];
}

char ComandsMediator::get_comand_left() {
    return comands_map[Left];
}

char ComandsMediator::get_comand_right() {
    return comands_map[Right];
}

void ComandsMediator::handle_comands() {
    comands_handler->handle_comands();
}

std::string ComandsMediator::get_comands_string() {
    return comands_string;
}

void ComandsMediator::set_comands_handler(ComandsHandler* comands_handler) {
    this->comands_handler = comands_handler;
}



