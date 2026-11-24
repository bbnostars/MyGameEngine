#include "Camera.h"

namespace MyEngine
{
    Camera::Camera(const glm::vec2& initialPosition, Size initialSize) 
        : position(initialPosition), cameraSize(initialSize)
    {
    }
}
