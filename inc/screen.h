#ifndef C_CONSOLE_FPS_SCREEN_H
#define C_CONSOLE_FPS_SCREEN_H

struct Screen {
    int width, height;
    char **symbols;
};

void levelToScreen();

#endif //C_CONSOLE_FPS_SCREEN_H
