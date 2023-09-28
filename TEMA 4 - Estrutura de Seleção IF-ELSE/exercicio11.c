#include <stdio.h>

int main()
{
    /*Numa mercearia as maçãs custam R$1,30 cada, se forem compradas
menos de doze, e R$1,00 se forem compradas pelo menos doze. Ler o número
de maçãs compradas, calcular e escrever o custo total da compra.*/

    float numMaca, custoTotal;

    printf("Informe o número de maças compradas:\n");
    scanf("%f", &numMaca);

    if (numMaca < 12)
    {
        custoTotal = numMaca * 1.30;
    }
    else
    {
       custoTotal = numMaca * 1;
    }
    
    printf("Custo Total: R$%.2f\n", custoTotal);

    return 0;
}
