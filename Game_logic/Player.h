#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H


class Player{
private:
    int health;
    int strength;
    int keys;
    int position_y, position_x;
    bool death, win, end_of_game, event_happened = false;
    bool is_moved = false, tr_pass = false;
public:


    Player(int x, int y);

    void set_end_of_game(bool end);
    bool get_end_of_game();

    void set_health(int health);
    void set_strength(int str);
    void set_keys(int key);

    void set_death();
    bool is_player_dead();
    void set_event_happened(bool ev);
    bool get_event_happened();

    bool get_is_moved();
    void set_is_moved(bool move);
    void tryed_passable(bool tr);
    bool get_tr_passable();
    int get_position_x();
    int get_position_y();
    void set_position_x(int x);
    void set_position_y(int y);

    int get_health();
    void increase_health();
    void decrease_health();
    void increase_strength();
    int get_strength();

    void increase_keys();
    int get_keys();

    void set_win(bool win);
    bool get_win();
};

#endif //UNTITLED_PLAYER_H
