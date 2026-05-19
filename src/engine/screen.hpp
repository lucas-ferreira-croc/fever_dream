#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <stdio.h>
#include <tamtypes.h>
#include <sifrpc.h>
#include <debug.h>
#include <unistd.h>

namespace fdream
{
    class screen
    {
    public:
        screen() = default;
        ~screen() = default;   
        
        static void sif_init_rpc();
        static void init_screen();
        static void clear_screen();
    };

}

#endif