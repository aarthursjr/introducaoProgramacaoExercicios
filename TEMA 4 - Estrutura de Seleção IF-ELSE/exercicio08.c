#include <stdio.h>
#include <math.h>

int main()
{
    int coeficienteA, coeficienteB, coeficienteC, delta, x1, x2;

    delta = pow(coeficienteB, 2) - 4 * coeficienteA * coeficienteC;

    x1 = (-coeficienteB + sqrt(delta)) / (2 * coeficienteA);
    x2 = (-coeficienteB - sqrt(delta)) / (2 + coeficienteA);

    printf("\nx1 = %d \nx2 = %d", x1, x2);

    return 0;
}
