#ifndef UNTITLED_ERRORLOG_H
#define UNTITLED_ERRORLOG_H
#include "ILogsLevel.h"

class ErrorLog : public ILogLevel{
private:
    std::string log_name = "[Error]";
    std::string message;
    Message* my_message;
    Field* field;
    Player* player;
public:
    ErrorLog(Field* field, Player* player, Message* new_message){
        this->field = field;
        this->player = player;
        this->my_message = new_message;
    }
    void update_message() override;
    std::string get_name() override;
    void clear_message() override;
    std::string get_message() override;
};
#endif //UNTITLED_ERRORLOG_H
