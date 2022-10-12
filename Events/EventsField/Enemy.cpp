//
// Created by Max on 12.10.2022.
//

#include "Enemy.h"


void Enemy::react(Player *player, Field* field) {
    if(player->get_strength()< 100) {
        player->decrease_health();
        std::cout << "You need to find gun first."<< "  Amount of health:" << player->get_health() << std::endl;
    }
    else{
        std::cout << "Great job! Now collect the key"<< std::endl;

    }
}
