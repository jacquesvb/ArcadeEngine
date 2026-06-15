#pragma once

#include <SFML/Graphics.hpp>

#include "Core/EngineVisitor.h"

class Engine
{
    private:
        sf::RenderWindow window_;
    
    public:
        Engine();

        bool IsRunning() const;

        void ProcessEvents();
        void Update();
        void Render();
    
    private:
        friend EngineVisitor;

        void EventWindowClose();
        void EventWindowResized(sf::Vector2u size);
        void EventWindowFocusLost();
        void EventWindowFocusGained();
};