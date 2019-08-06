/*
 * Swarm.cpp
 *
 *  Created on: 11 Nov 2018
 *      Author: Rehman Arshad
 */

#include "Swarm.h"

namespace Particle {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;
}

} /* namespace ending brackets */
