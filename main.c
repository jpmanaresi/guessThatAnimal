#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	char resp;
	char animal[13][20] = {"�guia", "Avestruz", "Baleia", "Cavalo", "Cobra", "Crocodilo", "Homem", "Le�o", "Macaco", "Morcego", "Pato", "Pinguim", "Tartaruga"};
	int i;
	do
	{
		printf ("Ol�\nVamos jogar um jogo?\nEscolha um dos animais desta lista e eu vou tentar adivinhar qual deles voc� escolheu.");
		printf ("\nAnimais:\n�guia;\nAvestruz;\nBaleia;\nCavalo;\nCobra;\nCrocodilo;\nHomem;\nLe�o;\nMacaco;\nMorcego;\nPato;\nPinguim;\nTartaruga.\n");
		
		printf ("\nVamos come�ar ent�o.\nSeu animal � um mam�fero? (S/N)\n");
		scanf ("%s", &resp);
		
			if (resp=='S'||resp=='s')
			{
				printf ("\nSeu animal � um quadr�pede? (S/N)\n");
				scanf ("%s", &resp);
				
				if (resp=='S'||resp=='s')
				{
					printf ("\nSeu animal � um carn�voro? (S/N)\n");
					scanf ("%s", &resp);
					
					if (resp=='S'||resp=='s')
					{
						printf ("\nSeu animal � um herb�voro? (S/N)\n");
						scanf ("%s", &resp);
						if (resp=='S'||resp=='s')	
						{
							i=8; /*Macaco*/
							
						}
						else
						{
							if (resp=='N'||resp=='n')	
							{
								i=7; /*Le�o*/
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
								printf ("\nPor favor, digite uma resposta v�lida.\n");
							}
					}
				}
				else
				{
					if (resp=='N'||resp=='n')
					{
					  
						printf ("\nSeu animal � um herb�voro? (S/N)\n");
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
								printf ("\nPor favor, digite uma resposta v�lida.\n");
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
								printf ("\nPor favor, digite uma resposta v�lida.\n");
							}
						}
					}
				else
					{
						printf ("\nPor favor, digite uma resposta v�lida.\n");
					}
				}
			}
			else
			{
				if (resp=='N'||resp=='n')
				{
					printf ("\nSeu animal � um quadr�pede? (S/N)\n");
					scanf ("%s", &resp);
				
				if (resp=='S'||resp=='s')
				{
					printf ("\nSeu animal � um herb�voro? (S/N)\n");
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
							printf ("\nPor favor, digite uma resposta v�lida.\n");
						}	
					}
				}
				else
				{
					if (resp=='N'||resp=='n')
				{
					printf ("\nSeu animal � um herb�voro? (S/N)\n");
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
							printf ("\nPor favor, digite uma resposta v�lida.\n");
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
							i=0; /*�guia*/
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
								printf ("\nPor favor, digite uma resposta v�lida.\n");
							}
								}
							}
							else
							{
									printf ("\nPor favor, digite uma resposta v�lida.\n");
							}
						}
					}
					else
					{
						printf ("\nPor favor, digite uma resposta v�lida.\n");
					}
					}	
				}
				else
					{
						printf ("\nPor favor, digite uma resposta v�lida.\n");
					}
				}	
				}
	else
		{
			printf ("\nPor favor, digite uma resposta v�lida.\n");
		}
	}
		if (resp=='S'||resp=='s'||resp=='N'||resp=='n')
		{
		
		printf ("\nVoc� escolheu %s? [S/N]\n", animal[i]);
		scanf ("%s", &resp);
		
			if (resp=='S'||resp=='s')
			{
				printf ("\nEu venci! Foi divertido!\n");
			}
			else 
			{
				if (resp=='N'||resp=='n')
				{
					printf ("\nVoc� me venceu! Mas me pergunto se voc� respondeu todas as perguntas corretamente...\n");
				}
				else
				{
				printf ("\nPor favor, digite uma resposta v�lida.\n");
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
