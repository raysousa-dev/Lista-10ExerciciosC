#include <stdio.h>

int main() {
int n, resto;

printf("Escreva um numero: ");
scanf("%d", &n);
resto = n % 2;
if(resto == 0) {
    printf("O numero %d e par.", n);
} else{
  printf("O numero %d e impar.", n);
}
return 0;

}