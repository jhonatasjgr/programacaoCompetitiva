
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h1, h2;
    scanf("%d %d", &h1, &h2);
    int resto1=0, resto2=0;
    if(h1>h2 || h1==h2){
        resto1= h1-h2;
        resto2=24-resto1;
        printf("O JOGO DUROU %d HORA(S)\n", resto2);
    }else{
        resto1 = h2-h1;
        printf("O JOGO DUROU %d HORA(S)\n", resto1);
    }
}
