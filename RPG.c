#include <stdio.h>
#include <stdlib.h>

	struct Perso {
		int type;
		float pv;
		float pm;
		int atk;

	};

	struct Monstre {
		int type;
		float pv;
		float pm;
		int atk;

	};

int a = 1;
int b = 4;

int rand_a_b (int a, int b) {
		return rand()%(b-a) +a;
}



int main (void) {





	struct Perso soigneuse;
		soigneuse.type = 1;
		soigneuse.pv = 100;
		soigneuse.pm = 100;
		soigneuse.atk = 15;
	

	struct Perso joueur;
		joueur.type = 1;
		joueur.pv = 200;
		joueur.pm = 50;
		joueur.atk = 50;
	
	struct Perso mage;
		mage.type = 1;
		mage.pv = 130;
		mage.pm = 200;
		mage.atk = 25;
	

	struct Perso assassin;
		assassin.type = 1;
		assassin.pv = 80;
		assassin.pm = 100;
		assassin.atk = 25;
	

	struct Monstre araignee;
		araignee.type = 2;
		araignee.pv = 60;
		araignee.pm = 50;
		araignee.atk = 30;
	

	struct Monstre troll;
		troll.type = 2;
		troll.pv = 250;
		troll.pm = 50;
		troll.atk = 60;
	

	struct Monstre loup;
		loup.type = 2;
		loup.pv = 70;
		loup.pm = 30;
		loup.atk = 40;
	


		int choixm = rand_a_b(1,4);



		if (choixm == 1) {
	printf("Une araignee vous barre la route !\n");
}
		if (choixm == 2) {
	printf("Un troll vous barre la route !\n");
}
		if (choixm == 3) {
	printf("Un loup vous barre la route !\n");
}



















	return 0;
}