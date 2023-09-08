#include <stdio.h>

int main()
{
    int base, altura, area;
    printf("Informe a base e altura do triângulo em números inteiros:\n ");
    scanf("%d%d", &base, &altura);
    area = (base * altura)/2;
    printf("Área do Triângulo: %d\n", area);
    return 0;
}
