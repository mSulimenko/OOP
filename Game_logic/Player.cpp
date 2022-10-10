
#include "Player.h"



Player::Player(Field* field){
    position_x = field->get_field_size_x()/2;
    position_y = field->get_field_size_y()/2;
    health = 100;
    strength = 50;
    death = false;
}

int Player::get_position_x(){
    return position_x;
}
int Player::get_position_y(){
    return position_y;
}
void Player::set_position_x(int x){
    position_x = x;
}
void Player::set_position_y(int y){
    position_y = y;
}

int Player::get_health() {
    return health;
}

void Player::increase_health() {
    if(health >= 75) health = 100;
    else health += 25;
}

void Player::increase_strength() {
    strength = 100;
}

int Player::get_strength() {
    return strength;
}

void Player::increase_keys() {
    keys++;
}

int Player::get_keys() {
    return keys;
}

bool Player::is_player_dead() {
    return death;
}

void Player::set_death() {
    death = true;
}

void Player::decrease_health() {
    health-=40;
    if (health<=0) this->set_death();
}

