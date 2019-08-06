/*
 * Particle.h
 *
 *  Created on:  11 Nov 2018
 *      Author: Rehman Arshad
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace Particle {

struct Particle {
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

} /* namespace ending bracket*/

#endif /* PARTICLE_H_ */
