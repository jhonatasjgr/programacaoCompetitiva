#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, qtPecas;
    double valorUnitatio, valorTotal;


    for (int i = 1; i<=2; i++){
            scanf("%d %d %lf", &codigo, &qtPecas, &valorUnitatio);
            valorTotal = valorTotal + (qtPecas * valorUnitatio);
    }

    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);

    return 0;
}
