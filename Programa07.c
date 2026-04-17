#include <stdio.h>

int main() {
int n1, n2, divisores = 0;

printf("Digite um numero: ");
scanf("%d", &n1);

for (n2 = 1; n2 <= n1; n2++) {
    if (n1 % n2 == 0) {
        divisores++;
    }
}

if (divisores == 2) {
    printf("O numero %d e primo!\n", n1);
} else {
    printf("O numero %d nao e primo.\n", n1);
}

system("pause");

return 0;

}
