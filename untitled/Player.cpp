
#include "Player.h"



Player::Player(Field* field){
    position_x = field->get_field_size_x()/2;
    position_y = field->get_field_size_y()/2;
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
