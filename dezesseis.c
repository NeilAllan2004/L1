#include <stdio.h>
int main(){
float horas,salarioL,salarioB;
printf("Digite a quantidade de horas trabalhadas no mês: ");
scanf("%f",&horas);
//valor de hora-aula baseado no salário de um professor de inglês de acordo com o site "salario.com.br"
salarioB=horas*16,22;
printf("Salário bruto: %.2f",salarioB);
//descontos do INSS baseados no site "https://institutodelongevidademag.org"
if(salarioB<=1212){
    salarioL=92.5*salarioB/100;
}
else if(salarioB<=2427,35){
    salarioL=91*salarioB/100;
}
else if(salarioB<=3641.03){
    salarioL=88*salarioB/100;
}
else{
    salarioL=86*salarioB/100;
}
printf("Salário líquido: %.2f",salarioL);
return 0;

}