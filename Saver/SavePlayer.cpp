#include "SavePlayer.h"
#include "iostream"
void SavePlayer::save_player(Player& player) {
    file.open(filepath, std::fstream::out);
    file << player.get_health() << '\n';
    file << player.get_strength()<< '\n';
    file << player.get_keys()<< '\n';
    file << player.get_position_x()<< '\n';
    file << player.get_position_y()<< '\n';
    file.close();
}

void SavePlayer::load_player(Player& player) {
    file.open(filepath, std::fstream::in);
    int health, strength, keys, x, y ;
    file>>health;
    file>>strength;
    file>>keys;
    file>>x;
    file>>y;
    (int)health;(int)strength;(int)keys;(int)x;(int)y;
    player.set_health(health);
    player.set_strength(strength);
    player.set_keys(keys);
    player.set_position_y(y);
    player.set_position_x(x);
    file.close();
}
