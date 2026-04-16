#include <stdio.h>

int main() {
float valor, soma = 0, media;
int contador = 0;

printf("Digite valores positivos: \n");
scanf("%f", &valor);
while (valor >= 0) {
    soma = soma + valor;
    contador++;

    printf("Proximo valor: ");
    scanf("%f", &valor);
}

if (contador > 0) {
    media = soma / contador;
    printf("\nVoce digitou %d numeros positivos.", contador);
    printf("\nA media dos valores e: %.2f\n", media);
} else {
    printf("\nNenhum valor positivo foi encontrado.\n");
}

system("pause");

return 0;

}