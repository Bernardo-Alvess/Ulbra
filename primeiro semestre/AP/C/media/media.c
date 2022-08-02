#include <stdio.h>

int main(){

    float ap1, ap2, as, media;

    printf("Digite a ap1\n");
    scanf("%f%*c", &ap1);
    printf("Digite a ap2\n");
    scanf("%f%*c", &ap2);
    printf("Digite a as\n");
    scanf("%f%*c", &as);

    media = ap1 + ap2 + as;

    printf("A média de idade é: %.2f - AP1 = %.2f - AP2 =%.2f - AS = %.1f", media, ap1, ap2, as);

    return 0;
}