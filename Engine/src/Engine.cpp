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
            Input();
            Render();
        }
    }

    void Engine::Input() 
    {
        std::string userInput;
        std::cin >> userInput;
        if (userInput == "quit") 
            isRunning = false;
        else 
            std::cout << "You entered: " << userInput << std::endl;
    }

    void Engine::Render() 
    {
        std::cout << initial_render << std::endl;
    }
}