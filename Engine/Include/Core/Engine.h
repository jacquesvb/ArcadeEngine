#pragma once

#include <SFML/Graphics.hpp>

#include "Core/EngineVisitor.h"
#include "Core/EngineContext.h"

class Engine
{
    private:
        sf::RenderWindow window_;
        EngineContext context_;
    
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
        void EventGamepadConnected(int id);
        void EventGamepadDisconnected(int id);
};