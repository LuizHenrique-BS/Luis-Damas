#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Digite um dia: ");
    scanf("%d", &dia);
    printf("Digite um mes: ");
    scanf("%d", &mes);
    printf("Digite um ano: ");
    scanf("%d", &ano);

    printf("%d/%d/%d\n", dia, mes, ano);

    return 0;
}