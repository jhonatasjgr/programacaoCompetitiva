#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, volume, circunferencia;
    double pi = 3.14159;

    scanf("%lf", &raio);

    volume = (4 * pi * (raio*raio*raio))/3;

    printf("VOLUME = %.3f\n", volume);

    return 0;
}
