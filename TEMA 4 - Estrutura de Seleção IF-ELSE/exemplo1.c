#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Informe dois números:");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
        printf("Maior número: %d\n", num1);
        else
        {
            if (num2 > num1)
                printf("Maior número: %d\n", num2);
                else
                {
                    if (num1 == num2)
                        printf ("Os números são iguais.\n");
                }
                
        }
    return 0;
}
