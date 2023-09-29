#include <stdio.h>

int main ()
{
	int opcao;

	printf("\t\tESCOLHA O SABOR DO SUCO DESEJADO:");
	printf("\n1 - Abacaxi \n2 - Acerola \n3 - Caju \n4 - Goiaba \n5 - Laranja \n6 - Limão \n7 - Mamão \n8 - Maracujá \n9 - Melão \n10 - Morango\n\n");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:{
			printf("\nSuco de abacaxi : R$3,50.");
			break;
		}
		case 2:{
			printf("\nSuco de Acerola : R$4,00.");
			break;
		}
		case 3:{
			printf("\nSuco de Caju : R$4,00.");
			break;
		}
        case 4:{
			printf("\nSuco de Goiaba : R$3,50.");
			break;
		}
        case 5:{
			printf("\nSuco de Laranja : R$3,00.");
			break;
		}
        case 6:{
			printf("\nSuco de Limão : R$3,00.");
			break;
		}
        case 7:{
			printf("\nSuco de Mamão : R$4,00.");
			break;
		}
        case 8:{
			printf("\nSuco de Maracujá : R$4,50.");
			break;
		}
        case 9:{
			printf("\nSuco de Melão : R$4,00.");
			break;
		}
        case 10:{
			printf("\nSuco de Morango : R$4,50.");
			break;
		}

		default:{
			printf("Opção Inválida.");
			break;
		}
	}

	return 0;
}
