#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Graphics graphics;
    graphics.init();

    int x, y;
    SDL_Event event;
    bool quit = false;
    while (! quit) {
        SDL_PollEvent(&event);
        switch (event.type) {
            case SDL_QUIT:
                 quit = true;
                 break;
            case SDL_MOUSEBUTTONDOWN:
                 SDL_GetMouseState(&x, &y);
                 cerr << "Mouse-down at (" << x << ", " << y << ")\n";
                 break;
        }
        SDL_Delay(100);
    }

    graphics.quit();
    return 0;
}
Graphics graphics;
graphics.init();

Tictactoe game;
game.init();
graphics.render(game);

            case SDL_MOUSEBUTTONDOWN:
                 SDL_GetMouseState(&x, &y);
                 processClick(x, y, game);
                 graphics.render(game);
                 break;
