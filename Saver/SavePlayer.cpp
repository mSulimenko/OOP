#include "SavePlayer.h"
#include "iostream"
void SavePlayer::save_player(Player& player) {
    file_input.exceptions(std::ofstream::badbit|std::ofstream::failbit);
    try{
        file_input.open(filepath,std::ios_base::out | std::ios_base::trunc);
        file_input << player.get_health() << '\n';
        file_input << player.get_strength()<< '\n';
        file_input << player.get_keys()<< '\n';
        file_input << player.get_position_x()<< '\n';
        file_input << player.get_position_y()<< '\n';
        file_input.close();
    }
    catch (std::exception const& e){
        std::cout<<"error: "<<e.what();
    }
}

void SavePlayer::load_player(Player& player) {
    file_output.exceptions(std::ifstream::badbit|std::ifstream::failbit);
    try {
        file_output.open(filepath, std::ios_base::in);
        int health, strength, keys, x, y;
        file_output >> health;
        file_output >> strength;
        file_output >> keys;
        file_output >> x;
        file_output >> y;
        player.set_health(health);
        player.set_strength(strength);
        player.set_keys(keys);
        player.set_position_y(y);
        player.set_position_x(x);
        file_output.close();
    }
    catch (std::exception const& e){
        std::cout<<"error: "<<e.what();
    }
}
