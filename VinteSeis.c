#include <stdio.h>
#include <math.h>
int main(){
float x1,y1,x2,y2;
printf("Digite as coordenadas do primeiro ponto:");
scanf("%f",&x1);
scanf("%f",&y1);
printf("Digite as coordenadas do segundo ponto:");
scanf("%f",&x2);
scanf("%f",&y2);
printf("A distância entre os dois pontos é %.1f",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
return 0;
}