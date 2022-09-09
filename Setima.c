#include <stdio.h>

int main(){
int hr,min,sec,total;
printf("Digite a quantidade de horas: ");
scanf("%d",&hr);
printf("Digite a quantidade de minutos: ");
scanf("%d",&min);
printf("Digite a quantidade de segundos: ");
scanf("%d",&sec);
total=(hr*3600)+(min*60)+sec;
printf("O total de segundos é: %d",total);
return 0;


}