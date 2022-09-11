#include <stdio.h>
int main(){
int x, n, temp;
printf("Digite o valor: ");
scanf("%d", &x);
printf("Digite o segundo valor: ");
scanf("%d", &n);
temp = 1 << n;

printf("O resultado é: %d.\n", x*temp);

return 0;
}