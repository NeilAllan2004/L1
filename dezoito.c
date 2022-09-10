#include <stdio.h>
#include <math.h>

int main(){
int r;
printf("Digite o raio: ");
scanf("%d",&r);
printf("O diâmetro do circulo é: %.2f\n",(float)r*2);
printf("O valor da circunferência do circulo é: %.2f\n",(float)r*2*3.14159);
printf("A área do circulo é: %.2f\n",pow((float)r,2)*3.14159);
return 0;

}