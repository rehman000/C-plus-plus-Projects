/*
 * Swarm.h
 *
 *  Created on: 11 Nov 2018
 *      Author: Rehman Arshad 
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace Particle {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace ending bracket */

#endif /* SWARM_H_ */
