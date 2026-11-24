#pragma once
#include "glm/vec2.hpp"

namespace MyEngine
{
    class Player
    {
    private:
        int health = 100;
        int score = 0;
        glm::vec2 position{ 0.0f, 0.0f };

    public:
        Player() = default;

        Player(int health, int score, const glm::vec2& position) : 
            health(health), score(score), position(position) {}

        int getHealth() const { return health; }
        void setHealth(int h) { health = h; }

        int getScore() const { return score; }
        void setScore(int s) { score = s; }

        glm::vec2 getPosition() const { return position; }
        void setPosition(const glm::vec2& position)
        {
            this->position = position;
        }
    };
}