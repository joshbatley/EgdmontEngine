#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char **argv)
{
    if (SDL_Init(SDL_INIT_VIDEO) > 0) {
        std::cout << "SDL Init failed: " << SDL_GetError() << std::endl;
    }

    SDL_Window *window =
      SDL_CreateWindow("My game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN);

    if (window == NULL) {
        std::cout << "Window failed to init. Error: " << SDL_GetError() << std::endl;
    }

    bool gameRunning = true;
    SDL_Event event;

    while (gameRunning) {

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT)
                gameRunning = false;
        }
    }

    SDL_Quit();

    return 0;
}
