#include <stdio.h>
int main(){

int  n1, n2;
printf("Digite o primeiro número: ");
scanf("%d",&n1);
printf("Digite o segundo número: ");
scanf("%d",&n2);

printf("O valor da soma dos números é: %d\n", n1+n2);
printf("O valor do produto dos números é: %d\n", n1*n2);
printf("O valor da diferença dos números é: %d\n", n1-n2);
printf("O valor do quociente dos números é: %d\n", n1/n2);
printf("O valor do resto dos números é: %d\n",n1%n2);
return 0;
}