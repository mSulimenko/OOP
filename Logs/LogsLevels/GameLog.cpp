#include "GameLog.h"

void GameLog::update_message() {
    message = my_message->Get_Player(player) +" "+ my_message->Event_Get(field, player);
}

std::string GameLog::get_name() {
    return log_name + message;
}

void GameLog::clear_message() {
    this->message = "";
}

std::string GameLog::get_message() {
    return this->message;
}
