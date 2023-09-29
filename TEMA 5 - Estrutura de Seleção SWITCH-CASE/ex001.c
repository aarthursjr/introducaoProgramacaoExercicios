#include <stdio.h>

int main ()
{
	int opcao;

	printf("\t\tESCOLHA O SABOR DESEJADO:");
	printf("\n1 - Muçarela \n2 - Calabresa \n3 - Portuguesa \n4 - Napolitana \n5 - Quatro-Queijos\n\n");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:{
			printf("\nPizza de Muçarela.");
			break;
		}
		case 2:{
			printf("\nPizza de Calabresa.");
			break;
		}
		case 3:{
			printf("Pizza Portuguesa.");
			break;
		}
		case 4:{
			printf("Pizza Napolitana.");
			break;
		}
		case 5:{
			printf("Pizza Quatro-Queijos.");
			break;
		}
		default:{
			printf("Opção Inválida.");
			break;
		}
	}

	return 0;
}
