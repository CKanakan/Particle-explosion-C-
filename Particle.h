/*
 * Particle.h
 *
 *  Created on: Jul 8, 2019
 *      Author: charliekanakan
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace sdl_Screen {

struct Particle {//struct is public by definition

	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace sdl_Screen */

#endif /* PARTICLE_H_ */
