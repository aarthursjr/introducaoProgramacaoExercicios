#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe um número: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Número par.\n");
        else
            printf("Número impar.\n");
    return 0;
}
