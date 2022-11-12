#include "Exit.h"

void Exit::react(Player *player, Field *field, Cell* cell) {
    player->set_win(true);
}
