#include <stdio.h>
int main(){
int n, n1,n2,n3;
printf("Digite um número para ser invertido: ");
scanf("%d",&n);
n1=n/100;
n2=(n-n1*100)/10;
n3=n-(n2*10+n1*100);
n=n3*100+n2*10+n1;
printf("O inverso do número é: %d",n);
return 0;
}