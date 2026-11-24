#pragma once
#include "EngineExport.h"
#include "Camera.h"
#include "Player.h"
#include "glm/vec2.hpp"

namespace MyEngine 
{

    class  Engine 
    {
    private:
        bool isRunning = true;
        Camera camera{};
        Player player{ 3, 0, glm::vec2{5.0f, 7.0f} };

        void Input();
        void Render();
        void Update();

    public:
        ENGINE_API Engine();

        ENGINE_API void Run();
        
    };

}