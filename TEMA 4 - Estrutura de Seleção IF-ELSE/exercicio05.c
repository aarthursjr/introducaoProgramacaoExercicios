#include <stdio.h>

int somaDosDoisMaiores(int a, int b, int c) {
    if (a >= b && a >= c) {
        if (b >= c) {
            return a + b;
        } else {
            return a + c;
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            return b + a;
        } else {
            return b + c;
        }
    } else {
        if (a >= b) {
            return c + a;
        } else {
            return c + b;
        }
    }
}

int main()
{
    int num1, num2, num3;
    int soma;
    printf("Informe três números: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    soma = somaDosDoisMaiores(num1, num2, num3);
    
    printf("%d", soma);

    return 0;
}
