#include "Character.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"

int main() {
	Character *zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << "\n\t * additional * \n\n";

	Enemy *s = new SuperMutant();
	zaz->attack(s);
	zaz->equip(pf);
	std::cout << *zaz;
	zaz->attack(s);
	std::cout << *zaz;
	zaz->recoverAP();
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->attack(s);
	std::cout << *zaz;
	zaz->attack(s);

	return 0;
}