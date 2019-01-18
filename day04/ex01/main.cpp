#include "Character.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"

int main() {
	Character *zaz = new Character("zaz");
	std::cout << *zaz;

// std::cout << "\n\n";

	Enemy *b = new RadScorpion();
	
// std::cout << "\n\n";

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

// std::cout << "\n\n";

	zaz->equip(pr);
	std::cout << *zaz;

// std::cout << "after 1 << \n\n";

	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;

// std::cout << "after 2 << \n\n";


	zaz->equip(pr);
	std::cout << *zaz;

// std::cout << "after 3 << \n\n";

	zaz->attack(b);
	std::cout << *zaz;

// std::cout << "after 4 << \n\n";

	zaz->attack(b);
	std::cout << *zaz;

// std::cout << "after 5 << \n\n";

	return 0;
}