#include <stdio.h>

int main (void) {

	struct Perso{
		int type;
		float pv;
		float pm;
		int atk;

	}

	struct Perso soigneuse {
		soigneuse.type = 1;
		soigneuse.pv = 100;
		soigneuse.pm = 100;
		soigneuse.atk = 15;
	}

	struct Perso joueur {
		joueur.type = 1;
		joueur.pv = 200;
		joueur.pm = 50;
		joueur.atk = 50;
	}

	struct Perso mage {
		mage.type = 1;
		mage.pv = 130;
		mage.pm = 200;
		mage.atk = 25;
	}

	struct Perso assassin {
		assassin.type = 1;
		assassin.pv = 80;
		assassin.pm = 100;
		assassin.atk = 25;
	}






	return 0;
}