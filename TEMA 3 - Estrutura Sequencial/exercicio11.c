#include <stdio.h>
const float percentual = 0.035;

int main()
{
    float custoSeguro, seguroTrigo, seguroAveia, seguroCevada, valorCobertura, acresTrigo, acresAveia, acresCevada;
    

    printf("Informe o valor da cobertura:\n");
    scanf("%f", &valorCobertura);
    printf("Informe o número de acres plantados com trigo:\n");
    scanf("%d", &acresTrigo);
    printf("Informe o número de acres plantados com aveia:\n");
    scanf("%d", &acresAveia);
    printf("Informe o número de acres plantados com cevada:\n");
    scanf("%d", &acresCevada);

    seguroTrigo = percentual * valorCobertura * acresTrigo;
    seguroAveia= percentual * valorCobertura * acresAveia;
    seguroCevada = percentual * valorCobertura * acresCevada;

    custoSeguro = seguroTrigo + seguroAveia + seguroCevada;

    printf ("\nCusto total do seguro: R$%.2f\n", custoSeguro);

    return 0;
}