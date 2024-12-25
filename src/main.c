#include <graphx.h>
#include <fileioc.h>
#include <ti/getcsc.h>

int main(void)
{
    gfx_Begin();
    gfx_PrintStringXY("HELLO", 100, 100);
    while(!os_GetCSC());
    gfx_End();
    return 0;
}