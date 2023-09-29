#include <stdio.h>
#include <math.h>

int main()
{
    float valorX, valorY;
    int opcao;

    printf("Informe dois valores X e Y:\n");
    scanf("%f%f", &valorX, &valorY);
    printf("\tESCOLHA A OPERAÇÃO A SER REALIZADA:\n");
    printf("\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Potenciação\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nResultado: %.2f", valorX + valorY);
        break;
    case 2:
        printf("\nResultado: %.2f", valorX - valorY);
        break;
    case 3:
        printf("\nResultado: %.2f", valorX * valorY);
        break;
    case 4:
        printf("\nResultado: %.2f", valorX / valorY);
        break;
    case 5:
        printf("\nResultado: %.2f", pot(valorX, valorY));
        break;
    default:
        break;
    }
    return 0;
}
