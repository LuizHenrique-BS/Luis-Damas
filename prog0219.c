#include <stdio.h>

int main(){
    float a;
    printf("Insira um numero real: ");
    scanf("%f", &a);

    printf("Parte inteira: %d\n", (int) a);
    printf("Parte inteira: %f\n", a - ((int) a));

    return 0;
}