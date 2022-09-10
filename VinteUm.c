#include <stdio.h>
int main(){
int n1,n2;
printf("Digite o primeiro número: ");
scanf("%d",&n1);
printf("Digite o segundo número: ");
scanf("%d",&n2);
printf("O número %s",(n1%n2 ? "não é multiplo" : "é multiplo"));
return 0;

}