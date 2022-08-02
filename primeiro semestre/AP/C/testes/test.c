#include <stdio.h>

int main(){
    int x = 1;
    printf("digite um numero");
    scanf("%d%*c", x);
    printf("é %d", x);
    return 0;
}