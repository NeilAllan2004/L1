#include <stdio.h>
int main(){
    int a, b;
    float c;
    printf("Valor do prato de comida: R$ 14,99\nValor da sobremeda: R$ 4,99\n");
    printf("Quantos pratos de comida você quer? \n");
    scanf("%d",&a);
    printf("Quantas sobremesas você quer? \n");
    scanf("%d",&b);
    c=(14.99*a)+(4.99*b);
    c=(110*c)/100;
    printf("O valor total do pedido é: %.1f \n",c);
    return 0;

}