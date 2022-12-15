#ifndef UNTITLED_SAVEPLAYER_H
#define UNTITLED_SAVEPLAYER_H
#include "../Game_logic/Player.h"
#include "fstream"


class SavePlayer{
private:
    std::ofstream file_input;
    std::ifstream file_output;
    std::string filepath = "PlayerSaves.txt";
public:
    void save_player(Player& player);
    void load_player(Player& player);
};
#endif //UNTITLED_SAVEPLAYER_H
