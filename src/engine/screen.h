#include <stdio.h>
#include <tamtypes.h>
#include <sifrpc.h>
#include <debug.h>
#include <unistd.h>

void sif_init_rpc()
{
    SifInitRpc(0);
}

void init_screen()
{
    init_scr();
}

void clear_screen()
{
    scr_clear();
}
