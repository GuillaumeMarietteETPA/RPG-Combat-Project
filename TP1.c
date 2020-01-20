#include <stdio.h>
#include <stdlib.h>


int a = 1;
int b = 4;

int rand_a_b (int a, int b) {
		return rand()%(b-a) +a;
}




int main (void) {

int pvjoueur = 200;
int pvmonstre = 100;
int atk = 40;
int atkmonstre = 30;
int def = 0;
int defmonstre = 0;
int choixj;
int pmj = 30;
int pmm = 30;
int dgtpoison = 15;
int pyes = 0;
int pmyes = 0;

	printf("Un sanglier pas tres gentil vous barre la route !\n");
	
		do {
			int choixm = rand_a_b(1,4);
				


			printf("Point de vie = %d \n", pvjoueur);
			printf("Point de mana = %d \n", pmj);
			printf("-----------------------\n");
			printf("Que faite vous ?\n");
			printf("Attaque[1] - Defense[2] - Poison[3] - Antidote[4]\n");

			scanf("%d", &choixj);

						if (pmm < 15) {

							choixm = rand_a_b(1,3);

						}

						if (pmm >= 15) {

							choixm = rand_a_b(1,4);	
						
						}


						if (choixj == 1) {
							
					
				printf("Vous attaquer vaillament !\n");
					if (choixm == 1) {

				pvmonstre = pvmonstre - atk;
				printf("Le sanglier perd %d PV\n", atk);
				
				if (pvmonstre > 0) {
					printf("Il lui reste %d PV\n", pvmonstre);		
					printf("Le sanglier riposte !\n");	
					printf("Vous perdez %d PV\n", atkmonstre);

					pvjoueur = pvjoueur - atkmonstre;

							if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}				
								




					}
				}
					if (choixm == 2) {

					defmonstre = atk / 3;
					pvmonstre = pvmonstre - defmonstre;
				printf("Le sanglier se protege !\n");
				printf("Le sanglier perd %d PV\n", defmonstre);

						if (pvmonstre > 0) {
							printf("Il lui reste %d PV\n", pvmonstre);
						}
						else  {
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}		
					


						}


					

								
				
				if (choixm == 3) {
					
				pvmonstre = pvmonstre - atk;
				
				printf("Le sanglier perd %d PV\n", atk);

				if (pvmonstre > 0) {
					printf("Il lui reste %d PV\n", pvmonstre);

						}

				if (pvmonstre <= 0)  {
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}		

				if (choixm == 3 && pmm >= 15)	{
						if (pmm > 0) {
					printf("Le sanglier vous empoisonne !\n");

					pmm = pmm - 15;
					pmyes = 2;
					}
				}
				

			
				
					}


						if (pyes > 0) {
								pvmonstre = pvmonstre - dgtpoison;

								if(pvmonstre > 0) {
								printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
								printf("Il lui reste %d PV\n", pvmonstre);
									}

								if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}	


			}
						
						
						if (pmyes > 0) {					
							if(pvjoueur > 0) {
						pvjoueur = pvjoueur - dgtpoison;
						printf("Vous subissez les degats du poison et perdez %d PV\n", dgtpoison);
						
						if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}				
						
						}
				}


		}
	

		
		if (choixj == 2) {
				
			
				
				printf("Vous brandisser votre bouclier !\n");
				
					if (choixm == 1) {


					def = atkmonstre / 4;
					pvjoueur = pvjoueur - def;


				if (pvjoueur > 0) {
				printf("Le sanglier charge sur vous et vous perdez %d PV\n", def);
				printf("Il vous reste %d PV\n", pvjoueur);
				}
				else {
				printf("Il vous reste 0 PV\n");
				printf("Vous etes mort...\n");
				break;
				}
			
				if (pyes > 0) {
						pvmonstre = pvmonstre - dgtpoison;
							if(pvmonstre > 0) {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste %d PV\n", pvmonstre);
						}
						
					
						if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}	


						}


			}


					if (choixm == 2) {

					printf("Le sanglier se protege egalement !\n");

						if (pyes > 0) {
						pvmonstre = pvmonstre - dgtpoison;
							if(pvmonstre > 0) {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste %d PV\n", pvmonstre);
						}

						if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");					
					break;
				}		

						}
					}
			
			if (choixm == 3) {
				if (choixm == 3 && pmm >= 15) {
						
					if (pmm > 0) {
					printf("Le sanglier vous empoisonne !\n");

					pmm = pmm - 15;
					pmyes = 2;
				}
				}
							

						if (pyes > 0) {
								pvmonstre = pvmonstre - dgtpoison;

								if(pvmonstre > 0) {
								printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
								printf("Il lui reste %d PV\n", pvmonstre);
									}

								if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}		
			
		}

			}

						if (pmyes > 0) {						
							if(pvjoueur > 0) {
						pvjoueur = pvjoueur - dgtpoison;
						printf("Vous subissez les degats du poison et perdez %d PV\n", dgtpoison);
						
						if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {							
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}				
						
						}


				}




	}







		



	if (choixj == 3) {
		
			if (pmj >= 15) {
		printf("Vous lancer un sort de poison !\n");

		pmj = pmj - 15;
		pyes = 2;
		
		printf("Il vous reste %d/30 PM\n", pmj);
			}
				else {
					printf("Vous n'avez pas assez de PM\n");
				}

			if (choixm == 1) {
				printf("Le sanglier riposte !\n");	
				printf("Vous perdez %d PV\n", atkmonstre);

					pvjoueur = pvjoueur - atkmonstre;
	
				
					if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}				
								if (pyes > 0) {
								pvmonstre = pvmonstre - dgtpoison;

								if(pvmonstre > 0) {
								printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
								printf("Il lui reste %d PV\n", pvmonstre);
									}

								if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}		

					}
					
			}
					if (choixm == 2) {

					
					printf("Le sanglier se protege !\n");

					if (pyes > 0) {
					pvmonstre = pvmonstre - dgtpoison;
						if(pvmonstre > 0) {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste %d PV\n", pvmonstre);
						}
					
						if (pvmonstre <= 0)  {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
						break;
						}			


						}


				}

					if (choixm == 3 && pmm >= 15)	{

							if (pmm >= 15) {
					printf("Le sanglier vous empoisonne !\n");

					pmm = pmm - 15;
					pmyes = 2;
						}
						

						if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}				

						if (pyes > 0) {
								pvmonstre = pvmonstre - dgtpoison;

								if(pvmonstre > 0) {
								printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
								printf("Il lui reste %d PV\n", pvmonstre);
									}

								if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}	

					}
					}
						
				
					
		

						if (pmyes > 0) {						
							if(pvjoueur > 0) {
						pvjoueur = pvjoueur - dgtpoison;
						printf("Vous subissez les degats du poison et perdez %d PV\n", dgtpoison);
						printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}										
						}
		}

		if (choixj == 4) {

			printf("Vous lancer le sort antidote ! \n");
			pmyes = 0;
			printf("Les effet du poison disparaissent\n");
			if (choixm == 1) {

				pvjoueur = pvjoueur - atkmonstre;


				if (pvjoueur > 0) {
				printf("Le sanglier charge sur vous et vous perdez %d PV\n", atkmonstre);
				printf("Il vous reste %d PV\n", pvjoueur);
				}
				else {
				printf("Il vous reste 0 PV\n");
				printf("Vous etes mort...\n");
				break;
				}
			
				if (pyes > 0) {
						pvmonstre = pvmonstre - dgtpoison;
							if(pvmonstre > 0) {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste %d PV\n", pvmonstre);
						}
						
					
						if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
					break;
				}	

			}
		}
			
			if (choixm == 2) {

					printf("Le sanglier se protege !\n");

					if (pyes > 0) {
					pvmonstre = pvmonstre - dgtpoison;
						if(pvmonstre > 0) {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste %d PV\n", pvmonstre);
						}
					
						if (pvmonstre <= 0)  {
						printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
						printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");
						break;
						}			

			}
		}
			
			if (choixm == 3 && pmm >= 15) {	

					if (pmm >= 15) {
					printf("Le sanglier vous empoisonne de nouveau!\n");

					pmm = pmm - 15;
					pmyes = 2;
						}
						

						if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}				

						if (pyes > 0) {
								pvmonstre = pvmonstre - dgtpoison;

								if(pvmonstre > 0) {
								printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
								printf("Il lui reste %d PV\n", pvmonstre);
									}

								if (pvmonstre <= 0)  {
					printf("Le  sanglier subit les degats du poison et perd %d PV\n", dgtpoison);
					printf("Il lui reste 0 PV, le vilain sanglier est vaincu !\n");			
					break;
				}	

			}


		}

	}










	if (pmj < 30) {
	printf("Vous regenerez 1 PM\n");
		
		pmj = pmj + 1;
		
	}
	if (pmm < 30) {
		pmm = pmm + 1;
	}

	printf("---------------FIN DU TOUR---------------\n");
	printf("-----------------------------------------\n");
}
		while ((pvmonstre > 0) && (pvjoueur > 0));
		
	



	return 0;

}
