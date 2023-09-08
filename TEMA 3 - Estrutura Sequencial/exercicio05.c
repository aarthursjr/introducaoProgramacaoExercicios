#include <stdio.h>
#include <math.h>

int main()
{
    int lado1, lado2, lado3, semiperimetro;
    float area;

    printf("***********Teorema de Herão***********\n");
    printf("Informe os três lados do triângulo:\n");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    semiperimetro = (lado1 + lado2 + lado3)/2;
    area = sqrt(semiperimetro *(semiperimetro - lado1)*(semiperimetro - lado2)*(semiperimetro - lado3));

    printf("Área do triângulo: %.2f", area);
    return 0;
}
