
#include "src/engine/screen.hpp"

namespace fdream
{
    void screen::sif_init_rpc()
    {
        SifInitRpc(0);
    }
    
    void screen::init_screen()
    {
        init_scr();
    }
    
    void screen::clear_screen()
    {
        scr_clear();
    }
}
