cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp Game_logic/Field.h Game_logic/Field.cpp Game_logic/Cell.cpp Game_logic/Cell.h Game_logic/Player.cpp Game_logic/Player.h Game_drawing/Drawfield.cpp Game_drawing/Drawfield.h Game_connectors/Controller.cpp Game_connectors/Controller.h Game_connectors/CommandReader.cpp Game_connectors/CommandReader.h Events/EventsPlayer/Heal.cpp Events/EventsPlayer/Heal.h Events/IEvent.h Events/IEvent.cpp Events/EventsPlayer/Trap.cpp Events/EventsPlayer/Trap.h Events/EventsPlayer/EventsPlayer.cpp Events/EventsPlayer/EventsPlayer.h Events/EventsField/EventsField.cpp Events/EventsField/EventsField.h Events/EventsField/Enemy.cpp Events/EventsField/Enemy.h Events/EventsPlayer/Key.cpp Events/EventsPlayer/Key.h Events/EventsPlayer/Gun.cpp Events/EventsPlayer/Gun.h Events/EventsField/Exit.cpp Events/EventsField/Exit.h Events/EventsPlayer/Wall.cpp Events/EventsPlayer/Wall.h Events/EventsPlayer/Empty.cpp Events/EventsPlayer/Empty.h Game_drawing/Cell_checker.cpp Game_drawing/Cell_checker.h Events/EventsLinks.cpp Events/EventsLinks.h Logs/Logger.cpp Logs/Logger.h Logs/Message.cpp Logs/Message.h Logs/LogsOutput/File.cpp Logs/LogsOutput/File.h Logs/LogsOutput/ILogsOutput.cpp Logs/LogsOutput/ILogsOutput.h Logs/LogsOutput/ConsoleOutput.cpp Logs/LogsOutput/ConsoleOutput.h Logs/LogsLevels/ILogsLevel.cpp Logs/LogsLevels/ILogsLevel.h Logs/LogsLevels/ErrorLog.cpp Logs/LogsLevels/ErrorLog.h Logs/LogsLevels/GameLog.cpp Logs/LogsLevels/GameLog.h Logs/LogsLevels/InfoLog.cpp Logs/LogsLevels/InfoLog.h Logs/Observer.cpp Logs/Observer.h Game.cpp Game.h Game_commands/FileInput.cpp Game_commands/FileInput.h)

set(SFML_DIR "C:\\Users\\79832\\CLionProjects\\lib\\sfml\\GCC 7.3.0 MinGW (SEH) - 64-bit\\SFML-2.5.1\\lib\\cmake\\SFML")

target_link_libraries(untitled sfml-graphics sfml-audio)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.5 REQUIRED graphics network audio window system)