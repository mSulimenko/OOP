//
// Created by Max on 10.10.2022.
//

#include "ExitFactory.h"

Event *ExitFactory::create_event() {
    return new Exit;
}
