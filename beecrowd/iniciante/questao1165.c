#include <stdio.h>

int main()
{
    int n, num, aux, cont;
    scanf("%d",&n);

    while (n--)
    {
        scanf("%d",&num);
        aux = num;
        while (aux >= 1)
        {
            if(num%aux == 0){
                cont++;
            }
            aux--;
        }
        if(cont==2){
            printf("%d eh primo\n", num);
        }else{
            printf("%d nao eh primo\n", num);
        }
        cont = 0;
    }
    
    return 0;
}
