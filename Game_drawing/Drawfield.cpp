#include "Drawfield.h"

Drawfield::Drawfield(Field *field){
    this->field = field;
    this->window_width = field->get_field_size_x()*CELL_SIZE;
    this->window_height = field->get_field_size_y()*CELL_SIZE;
}
int Drawfield::get_window_width(){
    return window_width;
}
int Drawfield::get_window_height(){
    return window_height;
}

void Drawfield::draw_field(sf::RenderWindow &window){

    sf::Texture none_texture;
    none_texture.loadFromFile("images/none.png");
    sf::Sprite none;
    none.setTexture(none_texture);

    sf::Texture player_texture;
    player_texture.loadFromFile("images/player.png");
    sf::Sprite player;
    player.setTexture(player_texture);

    sf::Texture wall_texture;
    wall_texture.loadFromFile("images/wall.png");
    sf::Sprite wall;
    wall.setTexture(wall_texture);
    for (size_t i = 0; i < field->get_field_size_y(); i++) {
        for (size_t j = 0; j < field->get_field_size_x(); j++) {
            switch( field->get_field_link()[i][j].get_type() ){
                case FIELD_CELL_TYPE_NONE:
                    none.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                    window.draw(none);
                    break;
                case FIELD_CELL_TYPE_PLAYER:
                    player.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                    window.draw(player);
                    break;
                case FIELD_CELL_TYPE_WALL:
                    wall.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                    window.draw(wall);
                    break;
            }
        }
    }
}

