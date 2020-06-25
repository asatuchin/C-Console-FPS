#include "../inc/level.h"
#include "../inc/render.h"
#include "../inc/screen.h"

extern struct Level currentLevel;

int main() {
    loadLevel("../res/1.lvl");
    levelToScreen();
    renderCurrentScreen();
    return 0;
}
