#include "src/engine/text.hpp"

namespace fdream
{
    void text_api::write_text_at_position(const char* text, int x, int y)
    {
        scr_setXY(x, y);
        scr_printf(text);
    }
}
