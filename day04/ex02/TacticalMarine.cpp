//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &obj) {
	*this = obj;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine &TacticalMarine::operator = (TacticalMarine const &obj) {
	(void)obj;
	return (*this);
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const {
	ISpaceMarine *marine = new TacticalMarine(*this);
	return (marine);
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}