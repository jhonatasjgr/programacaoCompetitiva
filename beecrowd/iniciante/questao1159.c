
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, cont=0,soma=0;
    scanf("%d", &n);
    int opcao =-1;
    while (opcao!=0){
        
        while (1){
            if(n%2==0){
                soma+=n;
                cont++;
            }
            if(cont==5) {
                printf("%d\n", soma);
                soma=0;
                cont=0;
                break;
            }
            n++;
        }   
        scanf("%d", &opcao);
        n=opcao;
        
    }
}
