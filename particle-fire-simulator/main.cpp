#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.hpp"
using namespace std;
using namespace caveofprogramming;

int main() {
    
    Screen screen;
    
    if(screen.init() == false) {  //Initialising
        cout << "Error initialising SDL." << endl;
    }
    
    while (true) {
        
        // Draw particles
        for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, 128, 0, 255);
            }
        }
        
        screen.setPixel(400, 300, 255, 255, 255);
        
        screen.update();
        
        // Check for messages/events
        if(screen.processEvents() == false) {
            break;
        }

    
    
    
    }
    
    
    
    
    
    screen.close(); //Closing all components
    
    return 0;
}

