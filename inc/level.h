#ifndef C_CONSOLE_FPS_LEVEL_H
#define C_CONSOLE_FPS_LEVEL_H

struct Level {
    int isReady, xLen, yLen, playerX, playerY;
    char **objects;
};

void loadLevel(const char *fileName);
void cleanLevel();

#endif //C_CONSOLE_FPS_LEVEL_H
