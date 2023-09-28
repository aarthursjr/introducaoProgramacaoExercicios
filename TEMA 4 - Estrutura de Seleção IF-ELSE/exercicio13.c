#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Informe a primeira nota do aluno:\n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota do aluno:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 4 && media < 6)
    {
        printf("Aluno deverá fazer a terceira avaliação.\n");
    }
    else
    {
        printf("Aluno reprovado.\n");
    }
    
    
    return 0;
}
