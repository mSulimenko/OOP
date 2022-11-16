#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#include <SFML/Graphics.hpp>
#include "Game_logic/Field.h"
#include "Game_drawing/Drawfield.h"
#include "Game_logic/Player.h"
#include "Game_connectors/CommandReader.h"
#include "Logs/Message.h"
#include "Logs/Logger.h"
#include "Logs/LogsOutput/File.h"
#include "Logs/LogsOutput/ConsoleOutput.h"
#include "Logs/LogsOutput/ILogsOutput.h"
#include "Logs/LogsLevels/InfoLog.h"
#include "Logs/LogsLevels/ErrorLog.h"
#include "Logs/LogsLevels/GameLog.h"
#include "Logs/Observer.h"
#include "Game_commands/FileInput.h"
#include "Game_commands/ComandsMediator.h"
#include "Game_commands/ComandsHandler.h"

class Game{
public:
    void start();
};
#endif //UNTITLED_GAME_H
