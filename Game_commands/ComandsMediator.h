#ifndef UNTITLED_COMANDSMEDIATOR_H
#define UNTITLED_COMANDSMEDIATOR_H
#include "string"
#include "map"

enum Moves{Up, Down, Left, Right, Stop};

class ComandsHandler;
class ComandsMediator {
private:
    std::string comands_string;
    std::map<int, char> comands_map;
    ComandsHandler* comands_handler;
public:
    std::map<int, char>* get_map(){
        return &comands_map;
    }
    void set_comands_handler(ComandsHandler* comands_handler);
    void set_comands(std::string new_comands);
    std::string get_comands_string();
    void handle_comands();
    char get_comand_up();
    char get_comand_down();
    char get_comand_left();
    char get_comand_right();
};


#endif //UNTITLED_COMANDSMEDIATOR_H
