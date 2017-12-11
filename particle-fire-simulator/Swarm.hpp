
#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.hpp"

namespace caveofprogramming {
    
    class Swarm {
    public:
        const static int NPARTICLES = 5000;
        
    private:
        Particle * m_pParticles;
        
    public:
        Swarm();
        virtual ~Swarm();
        void update();

        
        const Particle * const getParticles() { return m_pParticles; };
    };
    
} /* namespace caveofprogramming */

#endif /* SWARM_H_ */
