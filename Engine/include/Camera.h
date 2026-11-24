#pragma once
#include "EngineExport.h"
#include "types/Size.h"
#include "glm/vec2.hpp"

namespace MyEngine
{
    class Camera 
    {
    private:
        glm::vec2 position;
        Size cameraSize;

    public:
        ENGINE_API Camera(
            const glm::vec2& initialPosition = glm::vec2(19.0f, 15.0f),
            Size initialSize = Size{9, 13}
        );
    };
}