//
// Created by Dmitry ZABROTSKY on 2019-01-18.
//

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion();
	RadScorpion(RadScorpion const &obj);
	~RadScorpion();

	RadScorpion & operator = ( RadScorpion const &obj);
};


#endif
