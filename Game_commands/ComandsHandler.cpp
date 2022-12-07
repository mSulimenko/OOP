#include "ComandsHandler.h"


ComandsHandler::ComandsHandler(ComandsMediator *mediator) {
    this->mediator = mediator;
}


void ComandsHandler::handle_comands() {
    if(mediator->get_comands_string().length()!=4){
        set_standart_comands();
        return;
    }
    for (int i = 0; i < mediator->get_comands_string().length(); i++) {
        if (i == Up) mediator->get_map()->emplace(Up, mediator->get_comands_string()[i]);
        if (i == Down) mediator->get_map()->emplace(Down, mediator->get_comands_string()[i]);
        if (i == Left) mediator->get_map()->emplace(Left, mediator->get_comands_string()[i]);
        if (i == Right) mediator->get_map()->emplace(Right, mediator->get_comands_string()[i]);
    }
    check_repeats();
}

void ComandsHandler::check_repeats() {
    for (auto it1 = mediator->get_map()->begin(); it1 != mediator->get_map()->end(); it1++){
        for(auto it2 = it1; it2 != mediator->get_map()->end(); ){
            it2++;
            if(it1->second == it2->second){
                set_standart_comands();
                return;
            }
        }
    }
}

void ComandsHandler::set_standart_comands() {
    mediator->get_map()->clear();
    mediator->get_map()->emplace(Up, 'w');
    mediator->get_map()->emplace(Down, 's');
    mediator->get_map()->emplace(Left, 'a');
    mediator->get_map()->emplace(Right, 'd');
}

