#include "Game.h"


void Game::start() {

    srand(time(nullptr));
    Field field(15, 10);
    Player player(field.get_field_size_x()/2, field.get_field_size_y()/2);

    ComandsMediator comands_mediator;
    FileInput fileinput(&comands_mediator);
    fileinput.read();
    ComandsHandler comands_handler(&comands_mediator);
    comands_mediator.set_comands_handler(&comands_handler);
    comands_mediator.handle_comands();
    CommandReader command_reader(&player, &field, &comands_mediator);
    field.create_field();
    field.clear_field();
    Drawfield drawfield(&field);
    Logger logger;
    Observer observer(&player, &logger);
    Message message;
    GameLog gameLog(&player, &field);
    ErrorLog errorLog(&field, &player, &message);
    InfoLog infoLog(&field, &player);

    std::cout << "Output of logging: 1 - no logs, 2 - Only file, 3 - Only consolle, 4 - 2 and 3 \n";
    char answer = getchar();
    bool is_logs = true;
    File file;
    ConsoleOutput console;
    switch (answer) {
        case '1':
            is_logs = false;
            break;
        case '2':
            logger.add_output(&file);
            break;
        case '3':
            logger.add_output(&console);
            break;
        case '4':
            logger.add_output(&file);
            logger.add_output(&console);
            break;
        default:
            std::cout<<"Incorrect, only console will be used\n";
            logger.add_output(&console);
            break;
    }
    char temp = getchar();
    if(is_logs){
        std::cout << "Levels of logging: 1 - game status, 2 - model changes, 3 - Errors \n";
        answer = getchar();
        switch (answer) {
            case '1':
                observer.add_level(&gameLog);
                logger.add_level(&gameLog);
                observer.add_level(&infoLog);
                logger.add_level(&infoLog);
                observer.add_level(&errorLog);
                logger.add_level(&errorLog);
                break;
            case '2':
                observer.add_level(&infoLog);
                logger.add_level(&infoLog);
                observer.add_level(&errorLog);
                logger.add_level(&errorLog);
                break;
            case '3':
                observer.add_level(&errorLog);
                logger.add_level(&errorLog);
                break;
            default:
                std::cout<<"Incorrect, default logger will be used\n";
                observer.add_level(&errorLog);
                logger.add_level(&errorLog);
                break;
        }

        observer.check_game_status();
    }

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

        if(is_logs) observer.check_game();

        if(player.get_end_of_game()){
            window.close();
        }
        window.clear(sf::Color(183,212,168));
        drawfield.draw_field(window);
        window.display();
        sf::sleep(sf::milliseconds(100));
    }

    if(is_logs) observer.check_game();
}


