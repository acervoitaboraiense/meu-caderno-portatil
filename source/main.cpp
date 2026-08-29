#include <nds.h>
#include <stdio.h>

int main(void) {
    consoleDemoInit();

    PrintConsole topScreen;
    consoleInit(&topScreen, 0, BgType_Text4bpp, BgSize_T_256x256,
                31, 0, true, true);

    iprintf("Tela de baixo\n");
    iprintf("Hello, world!");

    consoleSelect(&topScreen);
    iprintf("Tela de cima\n");
    iprintf("Meu Caderno Portatil");


    while(1) {
        swiWaitForVBlank();
        if (keysDown() & KEY_START) break;
    }

    return 0;
}
