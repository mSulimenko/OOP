#include "InfoLog.h"



void InfoLog::update_message() {
    message = my_message->Get_Info(player);
}

std::string InfoLog::get_name() {
    return log_name + message;
}

void InfoLog::clear_message() {
    message = "";
}

std::string InfoLog::get_message() {
    return message;
}
