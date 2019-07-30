/*
 * Swarm.h
 *
 *  Created on: Jul 8, 2019
 *      Author: charliekanakan
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace sdl_Screen {

//can adjust the number of particles

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle *m_pParticles;
	int lastTime;



public:
	Swarm();
	virtual ~Swarm();
	void update(int update);

	const Particle * const getParticles(){ return m_pParticles; };
};

} /* namespace sdl_Screen */

#endif /* SWARM_H_ */
