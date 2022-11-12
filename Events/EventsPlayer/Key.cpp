#include "Key.h"
#include "../../Game_connectors/CommandReader.h"

void Key::react(Player *player, Field *field, Cell* cell) {
    player->increase_keys();
    if(player->get_keys() == 3) {
        std::cout << "You can go outside. Find a door."<< std::endl;
        field->add_exit();
    }
    else{
        field->add_enemy();
        std::cout<<"You need to find 3 keys. Number of your keys:" << player->get_keys() << std::endl;
    }
}
