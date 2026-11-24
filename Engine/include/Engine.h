#pragma once
#include "EngineExport.h"
#include "Camera.h"

namespace MyEngine 
{

    class  Engine 
    {
    private:
        bool isRunning = true;
        Camera camera{};

        void Input();
        void Render();

    public:
        ENGINE_API Engine();

        ENGINE_API void Run();
        
    };

}