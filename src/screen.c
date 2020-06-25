#include <stdlib.h>
#include "../inc/level.h"
#include "../inc/screen.h"

struct Screen currentScreen = { 0, 0 };
extern struct Level currentLevel;

void levelToScreen() {
    if (currentScreen.width > 0) {
        for (int i = 0; i < currentScreen.width ; i++) {
            free(currentScreen.symbols[i]);
        }
        free(currentScreen.symbols);
    }

    currentScreen.width = currentLevel.xLen;
    currentScreen.height = currentLevel.yLen;

    currentScreen.symbols = (char **) malloc(currentLevel.xLen * sizeof(char *));
    for (int x = 0; x < currentLevel.xLen; x++) {
        currentScreen.symbols[x] = (char *) malloc(currentLevel.yLen * sizeof(char));
        for (int y = 0; y < currentLevel.yLen; y++) {
            currentScreen.symbols[x][y] = currentLevel.objects[x][y];
        }
    }

}