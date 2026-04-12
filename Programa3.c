#include <stdio.h>

int main() {
float n1, n2, n3, media, menor, maior;

printf("Digite 3 numeros: ");
scanf("%f %f %f", &n1, &n2, &n3);
media = (n1 + n2 + n3)/3;
maior = n1;
if(n2 > maior){
    maior = n2;
}
if(n3 > maior){
    maior = n3;
}
menor = n1;
if(n2 < menor){
    menor = n2;
}
if(n3 < menor){
    menor = n3;
}
printf("O maior numero e %.2f\n. O numero medio e %.2f\n. O menor numero e %.2f\n", maior, media, menor);
return 0;

}