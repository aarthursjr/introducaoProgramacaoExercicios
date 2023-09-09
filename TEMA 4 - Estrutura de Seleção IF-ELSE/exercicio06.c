#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Informe dois números:\n");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Ordem crescente: %d %d\n", num1, num2);

    return 0;
}
