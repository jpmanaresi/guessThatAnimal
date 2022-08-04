#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	char resp;
	char animal[13][20] = {"Águia", "Avestruz", "Baleia", "Cavalo", "Cobra", "Crocodilo", "Homem", "Leão", "Macaco", "Morcego", "Pato", "Pinguim", "Tartaruga"};
	int i;
	do
	{
		printf ("Olá\nVamos jogar um jogo?\nEscolha um dos animais desta lista e eu vou tentar adivinhar qual deles você escolheu.");
		printf ("\nAnimais:\nÁguia;\nAvestruz;\nBaleia;\nCavalo;\nCobra;\nCrocodilo;\nHomem;\nLeão;\nMacaco;\nMorcego;\nPato;\nPinguim;\nTartaruga.\n");
		
		printf ("\nVamos começar então.\nSeu animal é um mamífero? (S/N)\n");
		scanf ("%s", &resp);
		
			if (resp=='S'||resp=='s')
			{
				printf ("\nSeu animal é um quadrúpede? (S/N)\n");
				scanf ("%s", &resp);
				
				if (resp=='S'||resp=='s')
				{
					printf ("\nSeu animal é um carnívoro? (S/N)\n");
					scanf ("%s", &resp);
					
					if (resp=='S'||resp=='s')
					{
						printf ("\nSeu animal é um herbívoro? (S/N)\n");
						scanf ("%s", &resp);
						if (resp=='S'||resp=='s')	
						{
							i=8; /*Macaco*/
							
						}
						else
						{
							if (resp=='N'||resp=='n')	
							{
								i=7; /*Leão*/
							}
							
						}
					}
					else
					{
						if (resp=='N'||resp=='n')
							{
								i=3; /*Cavalo*/
							}
						else
							{
								printf ("\nPor favor, digite uma resposta válida.\n");
							}
					}
				}
				else
				{
					if (resp=='N'||resp=='n')
					{
					  
						printf ("\nSeu animal é um herbívoro? (S/N)\n");
						scanf ("%s", &resp);
						if (resp=='S'||resp=='s')	
						{
							printf ("\nSeu animal possui garras? (S/N)\n");
							scanf ("%s", &resp);
							if (resp=='S'||resp=='s')
							{
								i=9; /*Morcego*/
							}
							else 
							{
								if (resp=='N'||resp=='n')
							{
								i=6; /*Homem*/
							}
							else
							{
								printf ("\nPor favor, digite uma resposta válida.\n");
							}
							}
						}
						else
						{
							if (resp=='N'||resp=='n')
							{
								i=2; /*Baleia*/	
							}
							else
							{
								printf ("\nPor favor, digite uma resposta válida.\n");
							}
						}
					}
				else
					{
						printf ("\nPor favor, digite uma resposta válida.\n");
					}
				}
			}
			else
			{
				if (resp=='N'||resp=='n')
				{
					printf ("\nSeu animal é um quadrúpede? (S/N)\n");
					scanf ("%s", &resp);
				
				if (resp=='S'||resp=='s')
				{
					printf ("\nSeu animal é um herbívoro? (S/N)\n");
					scanf ("%s", &resp);
					
					if (resp=='S'||resp=='s')
					{
						i=12; /*Tartaruga*/
					}
					else
					{
						if (resp=='N'||resp=='n')
						{
						 i=5; /*Crocodilo*/
						}
						else
						{
							printf ("\nPor favor, digite uma resposta válida.\n");
						}	
					}
				}
				else
				{
					if (resp=='N'||resp=='n')
				{
					printf ("\nSeu animal é um herbívoro? (S/N)\n");
					scanf ("%s", &resp);
					
					if (resp=='S'||resp=='s')
					{
						printf ("\nSeu animal possui garras? (S/N)\n");
						scanf ("%s", &resp);
							
						if (resp=='S'||resp=='s')
						{
							i=1; /*Avestruz*/
						}
						else 
						{
							if (resp=='N'||resp=='n')
							{
								i=10; /*Pato*/
							}
						else
						{
							printf ("\nPor favor, digite uma resposta válida.\n");
						}
						}
					}
					else
					{
						if (resp=='N'||resp=='n')
					{
						printf ("\nSeu animal possui garras? (S/N)\n");
						scanf ("%s", &resp);
							
						if (resp=='S'||resp=='s')
						{
							i=0; /*Águia*/
						}
						else 
						{
							if (resp=='N'||resp=='n')
							{
								printf ("\nSeu animal possui presas? (S/N)\n");
								scanf ("%s", &resp);
							
								if (resp=='S'||resp=='s')
								{
									i=4; /*Cobra*/
								}
								else
								{
									if (resp=='N'||resp=='n')
								{	
									i=11; /*Pinguim*/
								}
								else
							{
								printf ("\nPor favor, digite uma resposta válida.\n");
							}
								}
							}
							else
							{
									printf ("\nPor favor, digite uma resposta válida.\n");
							}
						}
					}
					else
					{
						printf ("\nPor favor, digite uma resposta válida.\n");
					}
					}	
				}
				else
					{
						printf ("\nPor favor, digite uma resposta válida.\n");
					}
				}	
				}
	else
		{
			printf ("\nPor favor, digite uma resposta válida.\n");
		}
	}
		if (resp=='S'||resp=='s'||resp=='N'||resp=='n')
		{
		
		printf ("\nVocê escolheu %s? [S/N]\n", animal[i]);
		scanf ("%s", &resp);
		
			if (resp=='S'||resp=='s')
			{
				printf ("\nEu venci! Foi divertido!\n");
			}
			else 
			{
				if (resp=='N'||resp=='n')
				{
					printf ("\nVocê me venceu! Mas me pergunto se você respondeu todas as perguntas corretamente...\n");
				}
				else
				{
				printf ("\nPor favor, digite uma resposta válida.\n");
				}
			}
		}	
		printf ("\nDeseja jogar novamente? (S/N)\n");
		scanf ("%s", &resp);
		system ("cls");
	}
	while (resp=='S'||resp=='s');
	system ("PAUSE");
	
	return 0;
}
