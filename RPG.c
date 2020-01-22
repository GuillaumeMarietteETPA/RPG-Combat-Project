#include <stdio.h>

int main (void) {

	struct Perso{
		int type;
		float pv;
		float pm;
		int atk;

	}

	struct Monstre{
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


	struct Monstre araignee {
		araignee.type = 2;
		araignee.pv = 60;
		araignee.pm = 50;
		araignee.atk = 30;
	}

	struct Monstre troll {
		araignee.type = 2;
		araignee.pv = 250;
		araignee.pm = 50;
		araignee.atk = 60;
	}

	struct Monstre loup {
		araignee.type = 2;
		araignee.pv = 70;
		araignee.pm = 30;
		araignee.atk = 40;
	}





	return 0;
}