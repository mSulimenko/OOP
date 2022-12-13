//
// Created by Max on 10.12.2022.
//

#include "SaveField.h"

void SaveField::save_field(Field &field) {
    file_input.open(filepath,std::ios_base::out | std::ios_base::trunc);
    CellChecker cell_checker;
    file_input << field.get_field_size_x() << '\n';
    file_input << field.get_field_size_y() << '\n';
    for(int i = 0; i < field.get_field_size_y(); i ++){
        for(int j = 0; j < field.get_field_size_x(); j ++){
            if(field.get_field_link()[i][j].is_player_here())
                file_input<<8;
            else if(!(field.get_field_link()[i][j].get_event()))
                file_input << 0;
            else if(cell_checker.is_wall((field.get_field_link()[i][j].get_event())))
                file_input << 1;
            else if(cell_checker.is_exit((field.get_field_link()[i][j].get_event())))
                file_input << 2;
            else if(cell_checker.is_enemy((field.get_field_link()[i][j].get_event())))
                file_input << 3;
            else if(cell_checker.is_key((field.get_field_link()[i][j].get_event())))
                file_input << 4;
            else if(cell_checker.is_gun((field.get_field_link()[i][j].get_event())))
                file_input << 5;
            else if(cell_checker.is_trap((field.get_field_link()[i][j].get_event())))
                file_input << 6;
            else if(cell_checker.is_heal((field.get_field_link()[i][j].get_event())))
                file_input << 7;

        }
        file_input<<std::endl;
    }

    file_input.close();
}

Field SaveField::load_field(Player& player) {
    file_output.open(filepath, std::ios_base::in);
    int x, y, c;
    char buf;
    file_output>>x;
    file_output>>y;
    (int)x;(int)y;
    Field field(x,y);
    field.clear_field();
    file_output.get(buf);
    for(int i = 0; i < field.get_field_size_y(); i ++){
        for(int j = 0; j < field.get_field_size_x(); j ++){
            file_output.get(buf); c = buf-'0';
            if(c==0)
                field.get_field_link()[i][j].set_event(nullptr);
            if(c==1)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_wall());
            if(c==2)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_exit());
            if(c==3)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_enemy());
            if(c==4)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_key());
            if(c==5)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_gun());
            if(c==6)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_trap());
            if(c==7)
                field.get_field_link()[i][j].set_event(field.get_event_links()->get_heal());
            if(c==8){
                field.get_field_link()[i][j].set_player(true);
                player.set_position_x(j);
                player.set_position_y(i);
            }
        }
        file_output.get(buf);
    }

    file_output.close();
    return field;
}
