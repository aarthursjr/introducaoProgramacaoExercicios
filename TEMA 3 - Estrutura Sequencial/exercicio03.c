#include <stdio.h>

int main(int argc, char const *argv[])
{  
    float pol, mm;
    printf("Informe a quantidade de chuva em polegadas:\n");
    scanf("%f", &pol);
    mm = pol * 25.4;
    printf("%.2f\" = %.2fmm", pol, mm);
    return 0;
}
