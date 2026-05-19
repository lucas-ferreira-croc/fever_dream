#include "src/engine/engine.hpp"

namespace fdream
{
    void engine::init_screen()
    {
        screen::sif_init_rpc();
        screen::init_screen();
    }
    
    void engine::clear_screen()
    {
        screen::clear_screen();
    }
    
    void engine::write_text_at_position(const char* text, int xpos, int ypos)
    {
        text_api::write_text_at_position(text, xpos, ypos);
    }
    
    void engine::sleep_thread(int seconds)
    {
        sleep(seconds);
    }
}
