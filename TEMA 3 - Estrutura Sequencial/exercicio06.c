#include <stdio.h>
#include <math.h>

int main()
{
    float raio, volume, area;
    const float pi = 3.14;
    
    printf("Informe o raio de uma esfera: : \n");
    scanf("%f", &raio);

    volume = (4/3) * pi * pow(raio, 3);
    area = 4 * pi * pow(raio, 2);

    printf("Volume da esfera: %.2fcm³\n Área da esfera: %.2fmm²\n", volume, area);
    return 0;
}
