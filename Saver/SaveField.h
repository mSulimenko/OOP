#ifndef UNTITLED_SAVEFIELD_H
#define UNTITLED_SAVEFIELD_H
#include "../Game_logic/Field.h"
#include "../Game_logic/Player.h"
#include "../Game_logic/Cell.h"
#include "../Game_drawing/Cell_checker.h"
#include "Saver.h"
#include "fstream"


class SaveField:public Saver{
private:
    std::ofstream file_input;
    std::ifstream file_output;
    std::string filepath = "FieldSaves.txt";
public:
    void save_field(Field& field);
    Field load_field(Player& player);
};
#endif //UNTITLED_SAVEFIELD_H
