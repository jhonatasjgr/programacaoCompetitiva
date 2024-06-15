#include <stdio.h>

int euclides(int a, int b){
    if(!b) return a;
    return euclides(b, a % b);
}

int main(int argc, char const *argv[]){
    
    int c,d,q,gcd;
    scanf("%d %d %d", &c, &d, &q);
    gcd = euclides(d, q);
    d /= gcd; q /= gcd;
    if(d>c || q>c) printf("IMPOSSIVEL\n");
    else printf("%d %d\n", d, q);
    return 0;
}
 