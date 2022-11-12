#ifndef UNTITLED_MESSAGE_H
#define UNTITLED_MESSAGE_H
#include "iostream"
#include "../Game_logic/Field.h"
#include "../Game_logic/Player.h"


class Message{
private:
    bool started_yet = true;
public:
    std::string Get_Player(Player* player);
    std::string Field_Get(Field& field);
    std::string Event_Get(Field* field, Player* player);
    std::string Get_Errors(Field* field, Player* player);
    std::string Get_Info(Player* player);
};



#endif //UNTITLED_MESSAGE_H
