
#include <stdio.h>

int main(){

    int lista[9];

    for (int i = 0; i < 9; i++){
        lista[i]=0;
    }
    

    int num1=320, num2=321;
    int i = num1;
    int quociente, quociente2, resto, resto2, cont=0;
    while (i<=num2){

        
        quociente = i/10;
        resto = i%10;

        if(quociente>9){
            quociente2 = quociente/10;
            resto2 = quociente%10;
            printf("%d %d %d\n", i, quociente2, resto2);
            if(resto2==0) lista[0]+=1;
            if(quociente2==1) lista[1]+=1;
            if(resto2==1) lista[1]+=1;
            if(quociente2==2) lista[2]+=1;
            if(resto2==2) lista[2]+=1;
            if(quociente2==3) lista[3]+=1;
            if(resto2==3) lista[3]+=1;
        }
        //printf("%d %d %d\n", i, quociente, resto);
        
        if(resto==0) lista[0]+=1;
        if(quociente==1) lista[1]+=1;
        if(resto==1) lista[1]+=1;
        if(quociente==2) lista[2]+=1;
        if(resto==2) lista[2]+=1;
        if(quociente==3) lista[3]+=1;
        if(resto==3) lista[3]+=1;
        i++;
    }
    
    printf("%d %d %d %d\n", lista[0], lista[1], lista[2], lista[3]);
    
    
    return 0;
}
