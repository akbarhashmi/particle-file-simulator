#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main() {
    
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed." << endl;
        return 1;
    }
    
    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                          SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    
    if (window == NULL) {
        SDL_Quit();
        return 2;
    }
    
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH,SCREEN_HEIGHT );
    
    if(renderer==NULL)
        return 3;
    if(texture==NULL)
        return 3;
    bool quit = false;
    
    SDL_Event event;
    
    while (!quit) {
        // Update particles
        // Draw particles
        // Check for messages/events
        
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}
