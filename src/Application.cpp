#include "Application.hpp"
#include <iostream>

// Constructor
Application::Application()
    : m_initialized(false)
{
    std::cout << "[Application] Constructor called\n";
}

// Destructor
Application::~Application()
{
    std::cout << "[Application] Destructor called\n";
}

// Initialize application
void Application::initialize()
{
    std::cout << "[Application] Initializing...\n";

    m_initialized = true;

    std::cout << "[Application] Initialization completed\n";
}

// Run application
void Application::run()
{
    if (!m_initialized)
    {
        std::cerr << "[Application] Error: Not initialized!\n";
        return;
    }

    std::cout << "[Application] Running...\n";
}

// Shutdown application
void Application::shutdown()
{
    std::cout << "[Application] Shutting down...\n";

    m_initialized = false;

    std::cout << "[Application] Shutdown completed\n";
}