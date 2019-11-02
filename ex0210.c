#include <stdio.h>

int main(){
    unsigned int ano, mes, dia;

    printf("Insira uma data no formato aaaa-mm-dd: ");
    scanf("%u", &ano);
    scanf("-%u", &mes);
    scanf("-%u", &dia);

    printf("%u/%u/%u\n", dia, mes, ano);

    return 0;
}