#include "Trap.h"
#include "../../Game_logic/Field.h"

void Trap::react(Player* player, Field* field, Cell* cell) {
    player->set_death();
    std::cout << "You have lost!" << std::endl;
}
