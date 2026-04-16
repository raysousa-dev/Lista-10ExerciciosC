#include <stdio.h>

int main() {
int n1, n2, soma;

printf("Numeros perfeitos entre 1 e 100:\n");

for (n1 = 1; n1 <= 100; n1++) {
  soma = 0;
    for (n2 = 1; n2 < n1; n2++) {
        if (n1 % n2 == 0) {
            soma = soma + n2;
        }
    }
    if (soma == n1) {
        printf("%d ", n1);
    }
}

system("pause");

return 0;

}