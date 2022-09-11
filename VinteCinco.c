#include <stdio.h>
int main(){
int sec, hr, min;
printf("Digite a quantidade de segundos: ");
scanf("%d",&sec);
if(sec>=60){
    min=sec/60;
    sec=sec%60;
    if(min>=60){
        hr=min/60;
        min=min%60;
    }
}
printf("Nesse tempo, há %d horas, %d minutos e %d segundos",hr,min,sec);

return 0;
}