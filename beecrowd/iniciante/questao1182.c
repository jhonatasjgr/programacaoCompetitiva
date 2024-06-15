
#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int x=12,y=12;
    double v[x][y], soma=0.0, media=0.0;
    char opcao;
    int c;
    scanf("%d", &c);
    scanf(" %c", &opcao);

    
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            scanf("%lf", &v[i][j]);
            //v[i][j] = rand() % 100;
        }
    }
    
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if(j==c) soma+=v[i][j];
        }
    }
    
    if(opcao=='S'){
        printf("%.1lf\n",soma);
    }else if (opcao=='M') {
        printf("%.1lf\n",soma/12);
    }
    
   
}