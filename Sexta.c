#include <stdio.h>
int main(){
float a, t;
char sexo;
printf("M para Masculino \nF para Feminino \nDigite seu sexo: ");
scanf("%c",&sexo);

printf("Digite sua altura: ");
scanf("%f",&a);

if(sexo=='M'){
    t=72.7*a-58;
}
else if(sexo=='F'){
    t=62.1*a-44.7;
}
printf("Peso ideal: %.2f",t);
return 0;




}