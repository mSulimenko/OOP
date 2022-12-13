#ifndef UNTITLED_LEVEL_GEN_H
#define UNTITLED_LEVEL_GEN_H

#include "iostream"
#include "Field_Generator.h"
#include "Rule_Health.h"
#include "Rule_Gun.h"
#include "Rule_Enemy.h"
#include "Rule_Wall.h"
#include "Rule_Player_Position.h"
#include "Rule_Trap.h"


class Level_Gen {
private:
    int level;

public:
    Field switch_mapgen_level(Player& player, int x, int y){
        std::cout<<"Enter game level (0 or 1)"<<std::endl;
        std::cin >> level;
        Field field(x, y);
        switch(level){
            case 0:
                Field_Generator<Rule_Player_Position<10,10>, Rule_Trap<1>, Rule_Health<1>, Rule_Enemy<1>, Rule_Gun<2>, Rule_Wall<10>> gen0;
                field = gen0.field_gen(x, y);
                player.set_position_x(10);
                player.set_position_y(10);
                break;
            case 1:
                Field_Generator<Rule_Player_Position<7,7>, Rule_Trap<6>, Rule_Health<4>, Rule_Enemy<4>, Rule_Gun<2>, Rule_Wall<15>> gen1;
                field = gen1.field_gen( x, y);
                player.set_position_x(7);
                player.set_position_y(7);
                break;
            default:
                Field_Generator<Rule_Player_Position<5,5>, Rule_Trap<2>, Rule_Health<2>, Rule_Enemy<1>, Rule_Gun<2>, Rule_Wall<10>> gendef;
                field = gendef.field_gen(x, y);
                player.set_position_x(5);
                player.set_position_y(5);

        }
        return field;

    }
};


#endif //UNTITLED_LEVEL_GEN_H
