#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, quant=0, cobaias=0, coelhos=0, ratos=0, sapos=0;
    char tipo;

    scanf("%d", &n);
    while(n--){
        scanf("%d %c", &quant, &tipo);
        cobaias+=quant;

        if(tipo == 'C') coelhos+=quant;
        if(tipo == 'R') ratos+=quant;
        if(tipo == 'S') sapos+=quant;

    }

        printf("Total: %d cobaias\n", cobaias);
        printf("Total de coelhos: %d\n", coelhos);
        printf("Total de ratos: %d\n", ratos);
        printf("Total de sapos: %d\n", sapos);
        printf("Percentual de coelhos: %.2lf %%\n", (coelhos * 100.)/cobaias);
        printf("Percentual de ratos: %.2lf %%\n", (ratos * 100.)/cobaias);
        printf("Percentual de sapos: %.2lf %%\n", (sapos * 100.)/cobaias);

    return 0;
}
