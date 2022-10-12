#include <SFML/Graphics.hpp>
#include "Game_logic/Field.h"
#include "Game_drawing/Drawfield.h"
#include "Game_logic/Player.h"
#include "Game_connectors/CommandReader.h"

int main()
{
    srand(time(nullptr));
    Field field;
    Player player(field.get_field_size_x()/2, field.get_field_size_y()/2);
    CommandReader command_reader(&player, &field);

    field.create_field();
    field.clear_field();

    Drawfield drawfield(&field);

    sf::RenderWindow window(sf::VideoMode(drawfield.get_window_width(), drawfield.get_window_height()), "Lab", sf::Style::Close);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        command_reader.read_from_keyboard();
        if(player.get_end_of_game()){
            window.close();
        }

        window.clear(sf::Color(183,212,168));
        drawfield.draw_field(window);
        window.display();
        sf::sleep(sf::milliseconds(100));
    }

    return 0;
}