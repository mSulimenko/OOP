//
// Created by Max on 09.10.2022.
//

#include "Enemy.h"

void Enemy::react(Player &player) {
    apply(player);
}

void Enemy::apply(Player &player) {
    if(player.get_strength()<100){
        player.decrease_health();

    }

    else{
                        //убить врага и заспавнить ключ
    }
}
