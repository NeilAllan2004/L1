#include <stdio.h>
int main(){
int dias;
float valorT;
printf("Digite a quantidade de dias trabalhados: ");
scanf("%d",&dias);

if(dias<=10){
valorT=90*(50.25*dias)/100;
}

else if(dias<=20){
valorT=90*(50.25*dias)/100;
valorT=120*valorT/100;
}

else{
valorT=90*(50.25*dias)/100;
valorT=130*valorT/100;

}
printf("O salário será de: R$%.2f",valorT);
return 0;
}