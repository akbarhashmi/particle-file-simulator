#include <iostream>
#include <SDL2/SDL.h>
#include <math.h>
#include "Screen.hpp"
#include <stdlib.h>
#include <time.h>
#include "Swarm.hpp"
using namespace std;
using namespace caveofprogramming;

int main() {
    
    srand(time(NULL));
    
    Screen screen;
    
    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }
    
    Swarm swarm;
    
    while (true) {
        // Update particles
        // Draw particles
        
        int elapsed = SDL_GetTicks();
        
        unsigned char green =
        (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);
        
        const Particle * const pParticles = swarm.getParticles();
        
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];
            
            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;
            
            screen.setPixel(x, y, red, green, blue);
        }
        
        // Draw the screen
        screen.update();
        
        // Check for messages/events
        if (screen.processEvents() == false) {
            break;
        }
    }
    /*
     if (screen.processEvents() == true) {
     int xyz = (particle.m_x + 10.99) * Screen::Screen _width;
     continue;
     
     }

     */
    
    screen.close();
    
    return 0;
}
