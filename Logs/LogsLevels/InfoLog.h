#ifndef UNTITLED_INFOLOG_H
#define UNTITLED_INFOLOG_H
#include "ILogsLevel.h"
class Game;

class InfoLog : public ILogLevel{
private:
    std::string log_name = "[Info]";
    std::string message;
    Message* my_message;
    Field* field;
    Player* player;
public:
    InfoLog(Field* field, Player* player){
        this->field = field;
        this->player = player;
        my_message = new Message;
    }
    void update_message() override;
    std::string get_name() override;
    void clear_message() override;
    std::string get_message() override;


};
#endif //UNTITLED_INFOLOG_H
