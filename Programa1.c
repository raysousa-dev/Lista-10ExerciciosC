#include <stdio.h>

int main() {
int s, h, m, sfinal, resto;

printf("Digite o valor dos segundos ");
scanf("%d", &s);
h = s / 3600;
resto = s % 3600;
m = resto / 60;
sfinal = resto % 60;
printf("%d segundos eh igual a: %d horas, %d minutos, %d segundos\n", s, h, m, sfinal);
  
system("pause");
  
return 0;

}
