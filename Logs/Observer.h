#ifndef UNTITLED_OBSERVER_H
#define UNTITLED_OBSERVER_H
#include <vector>
#include "LogsLevels/GameLog.h"
#include "LogsLevels/InfoLog.h"
#include "LogsLevels/ErrorLog.h"
#include "LogsLevels/ILogsLevel.h"
#include "../Game_logic/Field.h"
#include "../Game_logic/Player.h"
#include "Message.h"
#include "Logger.h"

class Observer{
private:
    std::vector<ILogLevel*> logsLevels;
    Player* player;
    Logger* logger;
    void notify();
public:
    Observer(Player* player, Logger* logger){
        this->player = player;
        this->logger = logger;
    }
    void add_level(ILogLevel* level);
    void check_game();
    void check_game_status();
};
#endif //UNTITLED_OBSERVER_H
