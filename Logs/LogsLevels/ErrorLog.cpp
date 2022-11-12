#include "ErrorLog.h"

std::string ErrorLog::get_name() {
    if(!message.empty())
        return log_name + message;
    return "";
}

void ErrorLog::update_message() {
    if(player->get_tr_passable()){
        this->message = my_message->Get_Errors(field, player);
    }
    player->tryed_passable(false);
}

void ErrorLog::clear_message() {
    this->message = "";
}

std::string ErrorLog::get_message(){
    return this->message;
}
