#include <stdio.h>
int main(){

float  C, F;
printf("Digite a temperatura em Celsius: ");
scanf("%f",&C);
F= (9*C+160)/5;
printf("A temperatura em Fahrenheit é: %.2f", F);
return 0;
}