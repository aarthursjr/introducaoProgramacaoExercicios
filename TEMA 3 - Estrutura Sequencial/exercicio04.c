#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fah, cel;
    printf("Informe a temperatura em graus Fahrenheit: \n");
    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("Temperatura em graus Celsius: %.2fºC\n", cel);
    return 0;
}
