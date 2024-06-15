
#include<stdio.h>

int euclides(int a, int b){
    int temp;
    while (b>0){
        temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main(){
    int x,y,z,temp, ans;

    while (scanf("%d %d %d", &x, &y, &z) != EOF){
        if(x>z){
            temp=x;x=z;z=temp;
        }
        if(y>z){
            temp=y;y=z;z=temp;
        }
        ans = 0;
        if (z*z == x*x + y*y){
            ans = 1;
            if(euclides(x, euclides(y, z)) == 1) ans = 2;
        }
        //printf("tripla%s%s\n", ans >= 1 ? " pitagorica" : "", ans == 2 ? " primitiva" : "");

        if (ans == 0){
            printf("tripla");
        }else if(ans>=1){
            printf("tripla pitagorica");
        }else if(ans == 2){
             printf("tripla pitagorica primitiva");
        }
    }
    return 0;
}
