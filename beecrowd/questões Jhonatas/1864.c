#include <stdio.h>
 
int main() {
 
   char string[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("%c",string[i]);
    printf("\n");
    return 0;
}