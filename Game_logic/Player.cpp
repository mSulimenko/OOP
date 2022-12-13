#include "Player.h"


Player::Player(int x, int y){
    position_x = x;
    position_y = y;
    health = 100;
    strength = 50;
    keys = 0;
    death = false;
    win = false;
    end_of_game = false;
}
void Player::set_end_of_game(bool end){
    end_of_game = end;
}
bool Player::get_end_of_game(){
    return end_of_game;
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
    if (health<=0) {
        health = 0;
        this->set_death();
    }
}

void Player::set_win(bool win) {
    this->win = win;
}

bool Player::get_win() {
    return this->win;
}

bool Player::get_is_moved() {
    return is_moved;
}

void Player::set_is_moved(bool move) {
     is_moved = move;
}

bool Player::get_tr_passable() {
    return tr_pass;
}

void Player::tryed_passable(bool tr) {
    this->tr_pass = tr;
}

bool Player::get_event_happened() {
    return event_happened;
}

void Player::set_event_happened(bool ev) {
    this->event_happened = ev;
}

void Player::set_health(int health) {
    this->health = health;
}

void Player::set_strength(int str) {
    this->strength = str;
}

void Player::set_keys(int key) {
    this->keys = key;
}

