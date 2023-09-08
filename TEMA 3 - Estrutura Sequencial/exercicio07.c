#include <stdio.h>

int main()
{
    /*Ler o salário mensal de uma pessoa e o percentual de reajuste, calcular e
escrever o valor do salário reajustado.*/
    float salarioMensal, percentualReajuste, salarioReajustado;

    printf("Informe o salário mensal e o percentual de reajuste:\n");
    scanf("%f%f", &salarioMensal, &percentualReajuste);

    salarioReajustado = salarioMensal + (salarioMensal * (percentualReajuste / 100));

    printf("Salário reajustado:\nR$%.2f", salarioReajustado);
    return 0;
}
