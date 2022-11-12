#include "Empty.h"
#include "../../Game_logic/Cell.h"
void Empty::react(Player *player, Field *field, Cell* cell) {
    cell->set_passable(true);
}
