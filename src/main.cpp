#include "engine/engine.hpp"

int main(int argc, char* argv[])
{
    fdream::engine engine;
    engine.init_screen();

    for(;;)
    {
        engine.write_text_at_position("did the abhehestractions work?");
        engine.write_text_at_position("i killed the last emulator... i think?", 1);
        engine.sleep_thread(3);
        engine.clear_screen();
    
        engine.write_text_at_position("hello world from fever dream", 20, 20);
        engine.sleep_thread(3);
        engine.clear_screen();
    }

    return 0;
}