#ifndef UNTITLED_DRAWFIELD_H
#define UNTITLED_DRAWFIELD_H
#include "../Game_logic/Field.h"

#include <SFML/Graphics.hpp>

class Drawfield{
    Field* field;
    int window_width;
    int window_height;
public:
    Drawfield(Field *field);
    int get_window_width();
    int get_window_height();

    void draw_field(sf::RenderWindow &window);
};


#endif //UNTITLED_DRAWFIELD_H
