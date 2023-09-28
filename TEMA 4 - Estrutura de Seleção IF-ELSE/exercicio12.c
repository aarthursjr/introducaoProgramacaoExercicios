#include <stdio.h>

int main()
{
    int nomeTime1[99], nomeTime2[99], golsTime1, golsTime2;; 

    printf("Informe o nome do primeiro time:\n");
    scanf(" %[^\n]", &nomeTime1);
    printf("Informe a quantidade de gols do time: \n");
    scanf("%d", &golsTime1);
    printf("Informe o nome do segundo time:\n");
    scanf(" %[^\n]", &nomeTime2);
    printf("Informe a quantidade de gols do time: \n");
    scanf("%d", &golsTime2);

    if (golsTime1 > golsTime2)
    {
        printf("Vitória do %s\n", nomeTime1);
    }
    else if (golsTime2 > golsTime1)
    {
        printf("Vitória do %s\n", nomeTime2);
    }
    else
    {
        printf("Empate\n");
    }

    return 0;
}