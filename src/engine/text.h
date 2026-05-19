#include <stdio.h>
#include <tamtypes.h>
#include <sifrpc.h>
#include <debug.h>
#include <unistd.h>


void write_text_at_position(const char* text, int x, int y)
{
    scr_setXY(x, y);
    scr_printf(text);
}
