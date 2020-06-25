#include <stdio.h>
#include "../inc/level.h"

extern struct Level currentLevel;

int main() {
    loadLevel("../res/1.lvl");
    for (int x = 0; x < currentLevel.xLen; x++) {
        for (int y = 0; y < currentLevel.yLen; y++) {
            putchar(currentLevel.objects[x][y]);
        }
        putchar('\n');
    }
    return 0;
}
