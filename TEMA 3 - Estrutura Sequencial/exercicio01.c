#include <stdio.h>

int main()
{
    int num, numAnt, numSuc;
    printf("Informe um número:\n");
    scanf("%d", &num);
    numAnt = num - 1;
    numSuc = num + 1;
    printf("Número Antecessor: %d\n", numAnt);
    printf("Número Sucessor: %d\n", numSuc);
    return 0;
}
