#include <stdio.h>

int main()
{
    float valor;
    
    printf("Informe um número:\n");
    scanf("%f", &valor);

    if (valor > 0)
        printf("Número positivo.\n");
        else if (valor > 0)
            printf("Número negativo.\n");
                else 
                printf("Zero.\n");
                        
    return 0;
}
