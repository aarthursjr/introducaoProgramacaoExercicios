#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    printf("Informe duas notas:\n");
    scanf("%f%f", &nota1, &nota2);
    media = (nota1 + nota2)/2;
    printf("Média: %.1f", media); //%.1f delimita quantos algarismos após a vírgula, no caso, apenas 1.  
    return 0;
}
