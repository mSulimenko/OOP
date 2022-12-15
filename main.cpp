#include "Game.h"
#include "Saver/SavePlayer.h"
int main()
{
    Game game;
    int level;
    std::cout<<"New game - Enter 1, Load from file - enter 2"<<std::endl;
    std::cin>>level;
    switch(level){
        case 1:
            game.start_new();
            break;
        case 2:
            if(game.load_game()==-1){
                return -1;
            }
            break;
    default:
        return 0;
    }

}