#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    while(1){
        scanf("%d", &senha);
        if(senha!=2002){
            printf("Senha Invalida\n");
        }else{
            printf("Acesso Permitido\n");
            break;
        }
    }


    return 0;
}

/*
#include<stdio.h>
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);

		if(n==2002)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else
		{
			printf("Senha Invalida\n");
		}
	}
	return 0;
}
*/
