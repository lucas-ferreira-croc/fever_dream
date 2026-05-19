#ifndef TEXT_HPP
#define TEXT_HPP

#include <stdio.h>
#include <tamtypes.h>
#include <sifrpc.h>
#include <debug.h>
#include <unistd.h>

namespace fdream
{
    class text_api
    {
    public:
        text_api() = default;
        ~text_api() = default;

        static void write_text_at_position(const char* text, int x = 0, int y = 0);

    };
}

#endif