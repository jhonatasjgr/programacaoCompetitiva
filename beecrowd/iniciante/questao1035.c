
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d, somacd=0, somaab=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    somacd=c+d;
    somaab=a+b;
    
    if(b>c && d>a && somacd>somaab && c>0 && d>0 && a%2==0){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
