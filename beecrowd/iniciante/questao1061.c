#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    W dia(s)
    X hora(s)
    Y minuto(s)
    Z segundo(s)
    */
    int w,x,y,z;
    int w2,x2,y2,z2;

    w = 5;
    x = 8;
    y = 12;
    z = 23;

    int long diasSegundos1;
    diasSegundos1 = w * 86400;
    int horasSegundos1;
    horasSegundos1 = x * 60 * 60;
    int minutosSegundos1;
    minutosSegundos1 = x * 60;
    int segundosTotal1;

    segundosTotal1 = diasSegundos1+horasSegundos1+minutosSegundos1+z;

    int quantDias1 = diasSegundos1/60/60/24;

    w2 = 9;
    x2 = 6;
    y2 = 13;
    z2 = 23;

    int long diasSegundos2;
    diasSegundos2 = w2 * 86400;
    int horasSegundos2;
    horasSegundos2 = x2 * 60 * 60;
    int minutosSegundos2;
    minutosSegundos2 = x2 * 60;
    int segundosTotal2;

    segundosTotal2 = diasSegundos2+horasSegundos2+minutosSegundos2+z2;
    int quantDias2 = diasSegundos2/60/60/24;

    int restoSegundos = segundosTotal2-segundosTotal1;

    int qtdias = restoSegundos/60/60/24;
    int qthoras = restoSegundos/60/60%24;
    int qtminutos = restoSegundos/60/60/60;
    int qtsegundos = restoSegundos/60/60/60/60;
    printf("%d\n", qtdias);
    printf("%d\n", qthoras);
    printf("%d\n", qtminutos);
    printf("%d\n", qtsegundos);


    return 0;
}
