
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n=20, aux;
    int v[n];

    for (int i = 0; i < n; i++){ 
        scanf("%d", &v[i]);
    }

/*
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
           if(v[j]<v[j+1]){
            aux = v[j];
            v[j]=v[j+1];
            v[j+1]=aux;
           }
        }  
    }
*/
    int i=0;
    int tam=n;
    while (n > tam/2){
        aux = v[i];
        v[i] = v[n-1];
        v[n-1] = aux;
        n--;
        i++;
    }
    
    for (int i = 0; i < tam; i++){ 
        printf("N[%d] = %d\n", i, v[i]);
    }
    
}
