#include "Observer.h"

void Observer::add_level(ILogLevel *level) {
    logsLevels.push_back(level);
}

void Observer::check_game_status(){
    notify();
    logger->output();
}

void Observer::check_game() {
    if(player->get_is_moved()){
       notify();
       logger->output();
       player->set_is_moved(false);
    }
}

void Observer::notify() {
    if(!logsLevels.empty()){
        for(auto i:logsLevels){
            i->update_message();
        }
    }
}

