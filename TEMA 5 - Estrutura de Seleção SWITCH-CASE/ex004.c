#include <stdio.h>

int main()
{
    int opcao;

    printf("Digite o código de origem do produto(1 a 11):\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Procedência do produto: Norte.\n");
        break;
    case 2:
        printf("Procedência do produto: Sul.\n");
        break;
    case 3:
        printf("Procedência do produto: Oeste.\n");
        break;
    case 4:
        printf("Procedência do produto: Leste.\n");
        break;
    case 5:
    case 6:
        printf("Procedência do produto: Nordeste.\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Procedência do produto: Sudeste.\n");
        break;
    case 10:
        printf("Procedência do produto: Noroeste.\n");
        break;
    case 11:
        printf("Procedência do produto: Sudoeste.\n");
        break;
    default:
        printf("Procedência do produto: Importado. \n");
        break;
    }
    return 0;
}