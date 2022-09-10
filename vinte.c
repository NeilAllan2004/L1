#include <stdio.h>
int main(){
int n;
printf("Digite um número: ");
scanf("%d",&n);
printf("O número é : %s",(n%2 ? "impar" : "par"));
return 0;

}