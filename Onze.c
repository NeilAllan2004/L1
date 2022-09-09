#include <stdio.h>
int main(){
float V, C;
printf("Digite o valor da cotação do dólar(quantos reais vale 1 dólar): ");
scanf("%f",&C);
printf("Digite o valor, em reais, que você deseja converter: ");
scanf("%f",&V);
printf("O valor em dólar é de: %2.f",V/C);
return 0;



}