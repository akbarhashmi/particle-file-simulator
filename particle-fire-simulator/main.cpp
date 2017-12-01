#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.hpp"
using namespace std;
using namespace caveofprogramming;

int main() {
    
    Screen screen;
    
    if(screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }
    
    while (true) {
        // Update particles
        // Draw particles
        // Check for messages/events
        
        if(screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();
    
    return 0;
}

