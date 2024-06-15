
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n, posicao, menor=100;
    scanf("%d", &n);
    int v[n];

    for (int i = 0; i < n; i++){ 
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++){ 
        if(v[i]<menor){
            menor=v[i];
            posicao=i;
        }
    }
 
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
   
}
