#include <stdio.h>
int main(){

int  a, b, c;
printf("Digite o valor 1: ");
scanf("%d",&a);
printf("Digite o valor 2: ");
scanf("%d",&b);
c=b;
b=a;
a=c;
printf("o valor 1 agora é: %d \n", a);
printf("o valor 2 agora é: %d \n", b);
return 0;
}