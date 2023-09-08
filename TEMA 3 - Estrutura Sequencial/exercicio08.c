#include <stdio.h>

int main()
{
    /* Ler o número de eleitores de um município e o número de votos brancos,
nulos e válidos. Em seguida, calcular e escrever o percentual que cada tipo de
voto representa em relação ao total de eleitores. */

    int numEleitores, numBrancos, numNulos, numValidos;
    float percentualBrancos, percentualNulos, percentualValidos;

    printf("Informe o número de ELEITORES de um município: \n");
    scanf("%d", &numEleitores);
    printf("Informe o número de VOTOS BRANCOS: \n");
    scanf("%d", &numBrancos);
    printf("Informe o número de VOTOS NULOS: \n");
    scanf("%d", &numNulos);
    printf("Informe o número de VOTOS VÁLIDOS: \n");
    scanf("%d", &numValidos);


    percentualBrancos = (float)numBrancos / numEleitores * 100;
    percentualNulos = (float)numNulos / numEleitores * 100;
    percentualValidos = (float)numValidos / numEleitores * 100;

    printf("Percentual de votos brancos: %.2f\n", percentualBrancos);
    printf("Percentual de votos nulos: %.2f\n", percentualNulos);
    printf("Percentual de votos válidos: %.2f\n", percentualValidos);
    
    return 0;
}
