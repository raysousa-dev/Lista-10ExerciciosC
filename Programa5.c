#include <stdio.h>

int main() {
    long long int a = 0, b = 1, proximo, i;

    printf("Os 100 primeiros termos de Fibonacci:\n");
    printf("%lld, %lld", a, b);

    for (i = 3; i <= 100; i++) {
        proximo = a + b;
        
        printf(", %lld", proximo); 

        a = b;
        b = proximo;
    }

    printf("\n");

    system ("pause");
    
    return 0;
}