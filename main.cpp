#include <nds.h>
#include <stdio.h>

volatile int frame = 0;

void Vblank() {
    frame++;
}

int main(void) {
    consoleDemoInit();
    irqSet(IRQ_VBLANK, Vblank);
    iprintf("Hello DS dev'rs\n");

    while(1) {
        iprintf("\x1b[10;0HFrame = %d", frame);
        swiWaitForVBlank();
    }

    return 0;
}
