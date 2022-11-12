#include "Message.h"

std::string Message::Get_Player(Player* player){
    std::string health = std::to_string(player->get_health());
    std::string keys = std::to_string(player->get_keys());
    std::string power = std::to_string(player->get_strength());

    std::string player_position_x = std::to_string(player->get_position_x());
    std::string player_position_y = std::to_string(player->get_position_y());

    std::string s1 = "health: ";
    std::string s2 = "money: ";
    std::string s3 = "strength: ";

    std::string s4 = "player_position_y: ";
    std::string s5 = "player_position_y: ";
    return s1 + health + " " + s2 + keys + " " + s3 + power + " " + s4 + player_position_x + " " + s5 + player_position_y;
}


std::string Message::Event_Get(Field* field, Player* player){
    if (player->get_event_happened()){
        player->set_event_happened(false);
        return "Is event!";
    }
    else return "";
}

std::string Message::Get_Errors(Field *field, Player *player) {
    if(field->get_field_link()[player->get_position_y()][player->get_position_x()].is_passable()){
        return "Tried to go through the wall\n";
    }
    else{
        return "";
    }
}

std::string Message::Get_Info(Player* player) {
    if (!player->get_end_of_game() and started_yet){
        started_yet = false;
        return "Game has started";
    }
    if(player->get_end_of_game())
        return "Game has ended";
    return "";
}
