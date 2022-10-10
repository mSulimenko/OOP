#include "EnemyFactory.h"

Event *EnemyFactory::create_event() {
    return new Enemy;
}
