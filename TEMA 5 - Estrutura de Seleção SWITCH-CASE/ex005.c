#include <stdio.h>

int main()
{
    int opcao;

    printf("Informe a idade do nadador: \n");
    scanf("%d", &opcao);
    
    if (opcao < 5) {
        printf("Idade fora da faixa permitida.\n");
    } else {
        switch (opcao)
        {
        case 5:
        case 6:
        case 7:
            printf("Categoria: Infantil A.\n");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            printf("Categoria: Infantil B.\n");
            break;
        case 12:
        case 13:
            printf("Categoria: Juvenil A.\n");
            break;
        case 14:
        case 15:
        case 16:
        case 17:
            printf("Categoria: Juvenil B.\n");
            break;
        default:
            printf("Categoria: Adulto.\n");
            break;
        }
    }
    return 0;
}
