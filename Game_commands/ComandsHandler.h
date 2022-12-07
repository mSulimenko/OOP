#ifndef UNTITLED_COMANDSHANDLER_H
#define UNTITLED_COMANDSHANDLER_H
#include "ComandsMediator.h"

class ComandsHandler{
private:
    ComandsMediator* mediator;
public:
    ComandsHandler(ComandsMediator* mediator);
    void handle_comands();
    void check_repeats();
    void set_standart_comands();
};
#endif //UNTITLED_COMANDSHANDLER_H
