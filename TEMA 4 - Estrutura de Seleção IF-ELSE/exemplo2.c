#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Informe três números:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) 
        printf("Maior número: %d\n", num1);
        else
        {
            if (num2 > num1 && num2 > num3)
                printf("Maior número: %d\n", num2);
                else
                {
                    if (num3 > num1 && num3 > num2)
                        printf("Maior número: %d", num3);
                        else
                        {
                            if (num1 == num2 && num2 == num3)
                                printf("Os três números são iguais.");
                        }  
                }
        }
    return 0;
}
