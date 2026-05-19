#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "src/engine/screen.hpp"
#include "src/engine/text.hpp"



namespace fdream
{
    class engine
    {
    public:
        engine() = default;
        ~engine() = default;

        void init_screen();
        void clear_screen();

        void write_text_at_position(const char* text, int xpos = 0, int ypos = 0);

        void sleep_thread(int seconds);
    private:
        screen m_screen{};
        text_api m_text_api{};        
    };
}

#endif