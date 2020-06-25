#include <stdio.h>
#include <stdlib.h>

#include "../inc/level.h"

struct Level currentLevel;

void loadLevel(const char *fileName) {
    FILE *file;
    file = fopen(fileName, "r");

    fscanf(file, "%d", &currentLevel.xLen);
    fscanf(file, "%d", &currentLevel.yLen);
    fscanf(file, "%d", &currentLevel.playerX);
    fscanf(file, "%d\n", &currentLevel.playerY);

    if (currentLevel.isReady) {
        cleanLevel();
    }

    currentLevel.objects = (char **) malloc(currentLevel.xLen * sizeof(char *));
    for (int x = 0; x < currentLevel.xLen; x++) {
        currentLevel.objects[x] = (char *) malloc(currentLevel.yLen * sizeof(char));
        for (int y = 0; y < currentLevel.yLen; y++) {
            currentLevel.objects[x][y] = (char) fgetc(file);
        }
        fgetc(file);
    }
}

void cleanLevel() {}
