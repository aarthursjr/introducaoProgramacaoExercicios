#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número:\n");
    scanf("%d", &num);
    
    switch (num)
    {
    case 1:{
        printf("Você informou número 1");
        break;
    }
    case 2:{
        printf("Você informou número 2");
        break;
    }
    case 3:{
        printf("Você informou número 3");
        break;
    }
    case 4:{
        printf("Você informou número 4");
        break;
    }
    case 5:{
        printf("Você informou número 5");
        break;
    }
    default:{
        printf("Número informado diferente de 1, 2, 3, 4, 5.");
    }
        break;
    }

    return 0;
}
