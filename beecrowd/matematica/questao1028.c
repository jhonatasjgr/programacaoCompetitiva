
#include <stdio.h>

int main()
{
    int n, num1, num2, maior=0, aux, i;

    scanf("%d",&n);

    if(n>=1 && n<=3000){
        while (n--){
            scanf("%d %d",&num1, &num2);
            
            if(num1>=1 && num1<=1000 && num2>=1 && num2<=1000){
                if(num1<num2)
                    aux = num1;
                else
                    aux = num2;

                //printf("%d", aux);
                i =1;
                while (i <= aux){
                    if (num1%i==0 && num2%i==0)
                    {
                        maior = i;
                    }
                    i++;            
                }
            }
            printf("%d\n", maior);
        }
    }   
    return 0;
}
