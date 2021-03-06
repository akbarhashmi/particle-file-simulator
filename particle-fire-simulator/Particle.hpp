

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace caveofprogramming {
    
    struct Particle {
        double m_x;
        double m_y;
        
        double m_speed;
        double m_direction;        
    public:
        Particle();
        virtual ~Particle();
        void update();

    };
    
} /* namespace caveofprogramming */

#endif /* PARTICLE_H_ */
