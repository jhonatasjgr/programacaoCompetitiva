//https://judge.beecrowd.com/pt/problems/view/1175
#include <stdio.h>
 
int main() {
 
    int n[20];
    for(int i=0;i<20;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<10;i++){
        int x = n[i];
        n[i] = n[19-i];
        n[19-i] = x;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
 
    return 0;
}