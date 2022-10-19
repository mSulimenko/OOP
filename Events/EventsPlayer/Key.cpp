//
// Created by Max on 12.10.2022.
//

#include "Key.h"
#include "../../Game_connectors/CommandReader.h"

int Key::react(Player *player, Field *field) {
    player->increase_keys();
    if(player->get_keys() == 3) {
        std::cout << "You can go outside. Find a door."<< std::endl;
        field->add_exit();
    }
    else{
        field->add_enemy();
        std::cout<<"You need to find 3 keys. Number of your keys:" << player->get_keys() << std::endl;
    }
    return 1;
}
