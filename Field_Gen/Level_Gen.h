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
        std::cout<<"Enter game level (0,1,2)"<<std::endl;
        std::cin >> level;
        Field field(x, y);
        switch(level){
            case 0:
                Field_Generator<Rule_Player_Position<10,10>, Rule_Trap<1>, Rule_Health<1>, Rule_Enemy<1>, Rule_Wall<10>, Rule_Gun<2>> gen0;
                field = gen0.field_gen(x, y);
                player.set_position_x(10);
                player.set_position_y(10);
                break;
            case 1:
                Field_Generator<Rule_Player_Position<5,5>, Rule_Trap<2>, Rule_Health<10>, Rule_Enemy<5>, Rule_Wall<5>, Rule_Gun<2>> gen1;
                field = gen1.field_gen( x, y);
                player.set_position_x(5);
                player.set_position_y(5);
                break;
            default:
                Field_Generator<Rule_Player_Position<2,2>, Rule_Trap<5>, Rule_Health<10>, Rule_Enemy<5>, Rule_Wall<5>, Rule_Gun<2>> gendef;
                field = gendef.field_gen(x, y);
                player.set_position_x(2);
                player.set_position_y(2);

        }
        return field;

    }
};


#endif //UNTITLED_LEVEL_GEN_H
