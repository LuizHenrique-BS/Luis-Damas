#include <stdio.h>

int main(){
    int s, m, h;
    s = m = h = 0;

    printf("Insira a quantidade de segundos: ");
    scanf("%d", &s);

    m = s % 3600 / 60;
    h = s / 3600;

    printf("%d segundos equivale a: %dh %dm %ds\n", s, h, m, s%60);

    return 0;
}