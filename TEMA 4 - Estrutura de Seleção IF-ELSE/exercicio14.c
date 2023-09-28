#include <stdio.h>

int main()
{
    float horasTotais, salarioHora, horasExtras, salarioTotal; 

    printf("Informe o número de horas trabalhadasem um mês:\n");
    scanf("%f", &horasTotais);
    printf("Informe o salário por hora:\n");
    scanf("%f", &salarioHora);

    if (salarioHora > 160)
    {
        horasExtras = horasTotais - 160;
    }
    else
    {
        horasExtras = 0;
    }

    if (horasExtras > 0)
    {
         salarioTotal = (160 * salarioHora) + (horasExtras * salarioHora * 1.5);
    }
    else
    {
        salarioTotal = horasTotais * salarioHora;
    }

    printf("O salário total do funcionário é: R$%2f\n", salarioTotal);
    
    

    return 0;
}
