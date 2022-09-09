#include <stdio.h>
int main(){

    float lar, comp, alt, vol;
    printf("Digite a largura: ");
    scanf("%f",&lar);
    printf("Digite o comprimento: ");
    scanf("%f",&comp);
    printf("Digite a altura: ");
    scanf("%f",&alt);
    vol= alt*comp*lar;
    printf("O volume é: %.1f",vol);
    return 0;
    

}