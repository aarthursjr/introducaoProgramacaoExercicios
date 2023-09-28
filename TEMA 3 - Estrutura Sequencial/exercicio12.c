#include <stdio.h>
#include <math.h>

 /*A potência necessária para iluminar adequadamente um cômodo é de 18
W/m2. Ler a potência de uma lâmpada e as dimensões (largura e comprimento)
do cômodo, calcular e escrever o número de lâmpadas necessárias para a
iluminação.*/

int main()
{
    float potenciaLampada, potenciaTotal, valorLargura, valorComprimento, areaComodo;
    int numLampadas;

    printf("Informe a potência da lâmpada (em Watts): \n");
    scanf("%f", &potenciaLampada);
    printf("Informe a largura do cômodo (em metros): \n");
    scanf("%f", &valorLargura);
    printf("Informe o comprimento do cômodo (em metros): \n");
    scanf("%f", &valorComprimento);

    areaComodo = valorLargura * valorComprimento; 
    potenciaTotal = areaComodo * 18;
    numLampadas = potenciaTotal / potenciaLampada;

    printf("O número de lâmpadas necessários  para a iluminação é %.d", numLampadas);

    return 0;
}
