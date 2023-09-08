#include <stdio.h>

int main()
{
    int num1, num2, produto;
    printf("Informe o primeiro número:\n");
    scanf("%d", &num1);
    printf("Informe o segundo número:\n");
    scanf("%d", &num2);
    produto = num1 * num2;
    printf("Produto dos números %d e %d é %d", num1, num2, produto);
    return 0;
}
