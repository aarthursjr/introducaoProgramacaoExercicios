#include <stdio.h>

int main()
{
    int anoAtual, anoNascimento, idade;

    printf("Informe o ano atual: \n");
    scanf("%d", &anoAtual);
    printf("Informe o ano do nascimento de uma pessoa: \n");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade >= 16)
    {
        printf("Voto permitido para idade.\n");
    }
    else
    {
        printf("Voto não permitido para idade.\n");
    }
    
    return 0;
}
