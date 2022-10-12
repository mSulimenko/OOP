//
// Created by Max on 12.10.2022.
//

#include "Key.h"

void Key::react(Player *player, Field *field) {
    player->increase_keys();
    std::cout<<"You need to find 3 keys. Number of your keys:" << player->get_keys() << std::endl;
}
