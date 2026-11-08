#ifndef APPLICATION_HPP
#define APPLICATION_HPP

class Application
{
public:
    Application();
    ~Application();

    void initialize();
    void run();
    void shutdown();

private:
    bool m_initialized;
};

#endif // APPLICATION_HPP