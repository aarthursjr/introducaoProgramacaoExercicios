#include <stdio.h>

int main()
{
    int valor, dobro;
    printf("Informe um valor:\n");
    scanf("%d", &valor);
    dobro = valor * 2;
    printf("O dobro de %d é %d", valor, dobro);
    return 0;
}
