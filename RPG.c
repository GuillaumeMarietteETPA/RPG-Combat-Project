#include <stdio.h>
#include <stdlib.h>

	struct perso {
		int type;
		char nom[30];
		float pv;
		float pm;
		int atk;

	};

	struct monstre {
		int type;
		char nom[30];
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





		perso Soigneuse = {1, "Soigneuse", 100, 100, 15};
		perso Joueur = {1, "Joueur", 200, 50, 50};	
		perso Mage = {1, "Mage", 130, 200, 25};
		perso Assassin = {1, "Assassin", 80, 100, 25};
	
		monstre Araignee = {2, "Araignee", 60, 50, 30};
		monstre Troll = {2, "Troll", 250, 50, 30};	
		monstre Loup = {2, "Loup", 70, 30, 40};

	
		
		typedef struct perso perso;
		typedef struct monstre monstre;

		int def;
		int defmonstre;
		int choixj;
		int xp = 0;

		
		int choixm = rand_a_b(1,4);

	printf("Point de vie = %s \n", Joueur.pv);
	printf("Point de mana = %s\n", Joueur.pm);
	printf("Points d'experiences = %d \n", xp);
	printf("-----------------------\n");
	


		if (choixm == 1) {
	printf("Une araignee vous barre la route !\n");
}
		if (choixm == 2) {
	printf("Un troll vous barre la route !\n");
}
		if (choixm == 3) {
	printf("Un loup vous barre la route !\n");
}
	
	printf("-----------------------\n");
	printf("Que faite vous ?\n");
	printf("Attaque[1] - Defense[2] - Poison[3] - Antidote[4]\n");

	scanf("%d", &choixj);

	int cm = 1; //rand_a_b(1,4);
		
		if (choixj == 1) {		
			if (choixm == 1) {
	printf("Vous attaquer vaillament !\n");
	Araignee.pv = Araignee.pv - Joueur.atk;
	printf("Le monstre perd %f PV\n", Joueur.atk);
			}			

			if (choixm == 2) {
	printf("Vous attaquer vaillament !\n");
	Troll.pv = Troll.pv - Joueur.atk;
	printf("Le monstre perd %f PV\n", Joueur.atk);
			}
			
			if (choixm == 3) {
	printf("Vous attaquer vaillament !\n");
	Loup.pv = Loup.pv - Joueur.atk;
	printf("Le monstre perd %f PV\n", Joueur.atk);
			}
		}

		





		if (choixj == 2) {
			if (choixm == 1) {
	printf("Vous brandisser votre bouclier !\n");
	def = Araignee.atk / 4;
	Joueur.pv = Joueur.pv - def;
	printf("Le monstre attaque et vous perdez %d PV\n", def);
			}

			if (choixm == 2) {
	printf("Vous brandisser votre bouclier !\n");
	def = Troll.atk / 4;
	Joueur.pv = Joueur.pv - def;
	printf("Le monstre attaque et vous perdez %d PV\n", def);
			}

			if (choixm == 3) {
	printf("Vous brandisser votre bouclier !\n");
	def = Loup.atk / 4;
	Joueur.pv = Joueur.pv - def;
	printf("Le monstre attaque et vous perdez %d PV\n", def);
			}
		}

		







		if (choixj == 3) {
	printf("Vous lancer un sort de poison !\n");
			
		}

		if (choixj == 4) {
	printf("Vous lancer un sort antidote ! \n");
			
		}














	return 0;
}