#include <nds.h>
#include <stdio.h>

int main(void) {
    consoleDemoInit();

    PrintConsole topScreen;
    consoleInit(&topScreen, 0, BgType_Text4bpp, BgSize_T_256x256,
                31, 0, true, true);

    iprintf("\x1b[1;1HTela de baixo");
    iprintf("\x1b[2;1HHello, world!");

    consoleSelect(&topScreen);
    iprintf("\x1b[1;1HTela de cima");
    iprintf("\x1b[2;1HMeu Caderno Portatil");
    iprintf("\x1b[3;1HPressione START para sair");


    while(1) {
        swiWaitForVBlank();
        if (keysDown() & KEY_START) break;
    }

    return 0;
}
