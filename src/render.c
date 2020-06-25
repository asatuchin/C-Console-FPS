#include <stdio.h>
#include "../inc/render.h"
#include "../inc/screen.h"

extern struct Screen currentScreen;

void renderCurrentScreen() {
    for (int x = 0; x < currentScreen.width; x++) {
        for (int y = 0; y < currentScreen.height; y++) {
            putchar(currentScreen.symbols[x][y]);
        }
        putchar('\n');
    }
}
