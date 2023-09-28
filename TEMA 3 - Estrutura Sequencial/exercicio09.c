#include <stdio.h>
const float perDistribuidor = 0.28;
const float perImposto = 0.45;

int main()
{
    float custoConsumidor, custoFabrica, valPerDistribuidor, valPerImposto;

    printf("Informe o custo de fábrica do carro: \n");
    scanf("%f", &custoFabrica);

    valPerDistribuidor = custoFabrica * perDistribuidor; 
    valPerImposto = custoFabrica * perImposto; 
    custoConsumidor = custoFabrica + valPerDistribuidor + valPerImposto; 

    printf("O custo final do produto: R$%.2f\n", custoConsumidor);
    return 0;
}
