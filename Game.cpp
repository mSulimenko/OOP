#include "Game.h"


void Game::start_new() {
    srand(time(nullptr));


    int x= 35;
    int y = 25;
    Player player(x/2, y/2);
    Field field(x, y);


    Level_Gen level_gen;
    field = level_gen.switch_mapgen_level(player, x, y);

    ComandsMediator comands_mediator;
    FileInput fileinput(&comands_mediator);
    ComandsHandler comands_handler(&comands_mediator);
    if(!fileinput.read()) comands_mediator.set_standart_comands();
    else {
        comands_mediator.set_comands_handler(&comands_handler);
        comands_mediator.handle_comands();
    }
    CommandReader command_reader(&player, &field, &comands_mediator);
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
    class SaveField saveField;
    saveField.save_field(field);

}

void Game::load_game() {


    Player player(5, 5);
    Field field(10, 10);

    class SaveField saveField;
    class SavePlayer savePlayer;

    savePlayer.load_player(player);
    field = saveField.load_field(player);

    ComandsMediator comands_mediator;
    FileInput fileinput(&comands_mediator);
    ComandsHandler comands_handler(&comands_mediator);
    if(!fileinput.read()) comands_mediator.set_standart_comands();
    else {
        comands_mediator.set_comands_handler(&comands_handler);
        comands_mediator.handle_comands();
    }
    CommandReader command_reader(&player, &field, &comands_mediator);
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
    saveField.save_field(field);
}


