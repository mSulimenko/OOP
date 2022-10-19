#include "Drawfield.h"

Drawfield::Drawfield(Field *field){
    this->field = field;
    this->window_width = field->get_field_size_x()*CELL_SIZE;
    this->window_height = field->get_field_size_y()*CELL_SIZE;
    cellChecker = new CellChecker;
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

    sf::Texture heart_texture;
    heart_texture.loadFromFile("images/heart.png");
    sf::Sprite heart;
    heart.setTexture(heart_texture);

    sf::Texture player_texture;
    player_texture.loadFromFile("images/player.png");
    sf::Sprite player;
    player.setTexture(player_texture);

    sf::Texture enemy_texture;
    enemy_texture.loadFromFile("images/enemy.png");
    sf::Sprite enemy;
    enemy.setTexture(enemy_texture);

    sf::Texture exit_texture;
    exit_texture.loadFromFile("images/exit.png");
    sf::Sprite exit;
    exit.setTexture(exit_texture);

    sf::Texture gun_texture;
    gun_texture.loadFromFile("images/gun.png");
    sf::Sprite gun;
    gun.setTexture(gun_texture);

    sf::Texture key_texture;
    key_texture.loadFromFile("images/key.png");
    sf::Sprite key;
    key.setTexture(key_texture);

    sf::Texture trap_texture;
    trap_texture.loadFromFile("images/trap.png");
    sf::Sprite trap;
    trap.setTexture(trap_texture);

    sf::Texture wall_texture;
    wall_texture.loadFromFile("images/wall.png");
    sf::Sprite wall;
    wall.setTexture(wall_texture);

    for (size_t i = 0; i < field->get_field_size_y(); i++) {
        for (size_t j = 0; j < field->get_field_size_x(); j++) {

            if (cellChecker->is_wall(field->get_field_link()[i][j].get_event())){
                wall.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(wall);
            }
            if (cellChecker->is_heal(field->get_field_link()[i][j].get_event())){
                heart.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(heart);
            }
            if (cellChecker->is_trap(field->get_field_link()[i][j].get_event())){
                trap.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(trap);
            }
            if (cellChecker->is_gun(field->get_field_link()[i][j].get_event())){
                gun.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(gun);
            }
            if (cellChecker->is_key(field->get_field_link()[i][j].get_event())){
                key.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(key);
            }
            if (cellChecker->is_enemy(field->get_field_link()[i][j].get_event())){
                enemy.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(enemy);
            }
            if (cellChecker->is_exit(field->get_field_link()[i][j].get_event())){
                exit.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(exit);
            }
            if( field->get_field_link()[i][j].is_empty()){
                none.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(none);
            }
            if (field->get_field_link()[i][j].is_player_here()){
                player.setPosition(float(j * CELL_SIZE), float(i * CELL_SIZE));
                window.draw(player);
            }
        }
    }
}

