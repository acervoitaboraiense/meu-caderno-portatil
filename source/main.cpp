#include <nds.h>
#include <stdio.h>

#include "font_bin.h"

int main(void) {
    PrintConsole topScreen;
    consoleInit(&topScreen, 0, BgType_Text4bpp, BgSize_T_256x256,
                31, 0, true, true);

    consoleSetFont(&topScreen, (ConsoleFont*)font_bin);

    consoleSelect(&topScreen);

    iprintf("\x1b[1;1HHello, world!");
    iprintf("\x1b[2;1HMeu Caderno Portatil");
    iprintf("\x1b[3;1HCom uma fonte personalizada!");

    while(1) {
        swiWaitForVBlank();
    }

    return 0;
}
