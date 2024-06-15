#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int c;
    char s[]="22233344455566677778889999";
    while ((c=getchar()) != '\n'){
        if (c>='A' && c<='Z') c = s[c - 'A'];
        putchar(c);
    }

    return 0;
}
