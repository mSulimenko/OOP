#ifndef UNTITLED_GAMELOG_H
#define UNTITLED_GAMELOG_H
#include "ILogsLevel.h"

class GameLog : public ILogLevel{
private:
    std::string log_name = "[Game]";
    std::string message;
    Message* my_message;
    Player* player;
    Field* field;
public:
    GameLog(Player* player, Field* field){
        this->player = player;
        this->field = field;
        my_message = new Message;
    }
    void update_message() override;
    std::string get_name() override;
    void clear_message() override;
    std::string get_message() override;

};
#endif //UNTITLED_GAMELOG_H
