
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int opcao=-1;
    while (opcao != 0){      
        for (int i = 1; i <= n; i++){
            printf("%d ", i);
        }
        printf("\n");
        scanf("%d", &opcao);
        n=opcao;
    }

}
