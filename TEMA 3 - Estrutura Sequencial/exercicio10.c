#include <stdio.h>

int main()
{
    int carrosVendidos;
    float valorTotal, salarioFixo, valorCarro;
    float salarioMensal, comissaoFixa, comissaoCarro;

    printf("Informe o número de carros vendidos:\n");
    scanf("%d", &carrosVendidos);
    printf("Informe o valor total de suas vendas:\n");
    scanf("%f", &valorTotal);
    printf("Informe o salário fixo do vendedor:\n");
    scanf("%f", &salarioFixo);
    printf("Informe valor que o vendedor recebe por carro:\n");
    scanf("%f", &valorCarro);

    comissaoFixa = carrosVendidos * valorCarro;
    comissaoCarro = valorTotal * 0.05;
    salarioMensal = salarioFixo + comissaoFixa + comissaoCarro;

    printf("\nO salário mensal do vendedor: %.2f\n", salarioMensal);

    return 0;
}
