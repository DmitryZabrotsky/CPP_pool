#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main() {

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* bob2 = bob->clone();

	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jim2 = jim->clone();

	ISquad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(bob2);
	vlc->push(jim2);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
	return 0;
}