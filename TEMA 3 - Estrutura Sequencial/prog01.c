#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, soma = 0;
    printf("Informe 4 numeros inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    soma = num1 + num2 + num3 + num4;
    printf("Soma dos números informados: %d", soma);
    return 0;
}
