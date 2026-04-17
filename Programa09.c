#include <stdio.h>

int main() {
int a, b, total = 0;

for (a = 0; a <= 6; a++) {
    for (b = a; b <= 6; b++) {
        total = total + a + b;
    }
}

printf("A soma de todos os numeros de um domino e: %d\n", total);

system("pause");

return 0;

}
