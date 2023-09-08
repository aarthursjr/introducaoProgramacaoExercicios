#include <stdio.h>

int main() {
    char nome[50], sobrenome[50];

    printf("Digite o nome: ");
    scanf(" %[^\n]s", nome); //%[^\n]s é usado para ler dados com espaços.

    printf("Digite o sobrenome: ");
    scanf(" %[^\n]s", sobrenome); 

    printf("'%s', '%s'\n", sobrenome, nome);

    return 0;
}