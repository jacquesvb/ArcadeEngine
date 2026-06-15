#pragma once

#include <SFML/Window/Event.hpp>

struct EngineVisitor
{
    class Engine& engine; // forward declaration

    void operator()(const sf::Event::Closed&);
    void operator()(const sf::Event::Resized&);
    void operator()(const sf::Event::FocusLost&);
    void operator()(const sf::Event::FocusGained&);
    void operator()(const auto&) {}
};