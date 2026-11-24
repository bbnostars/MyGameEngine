#include "MapHelper.h"
#include "Engine.h"
#include <iostream>

namespace MyEngine 
{

    Engine::Engine() 
    {
        
    }

    void Engine::Run() 
    {
        std::cout << game_start_message << std::endl;
        while (isRunning) 
        {
            Render();
            Update();
            Input();
        }
        std::cout << game_over_bad_message;
    }

    void Engine::Render() 
    {
        std::cout << initial_render << std::endl;
    }

    void Engine::Update() 
    {
        std::cout << "health : " << player.getHealth() << ", score : " << player.getScore()<< std::endl;
    }

    void Engine::Input()
    {
        std::cout << "Please make a decision" << std::endl;
        std::cout << "Your options are \"n\", \"e\", \"s\", \"w\", \"quit\"" << std::endl;
        std::string userInput;
        std::cin >> userInput;
        if (userInput == "quit")
            isRunning = false;
    }
}