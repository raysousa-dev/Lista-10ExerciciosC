#include <stdio.h>

int main() {
float n1, n2, resultado;
int opcao;

printf("Digite o primeiro numero ");
scanf("%f", &n1);
printf("Digite o segundo numero ");
scanf("%f", &n2);

printf("Escolha a operacao\n");
printf("1. Soma(+)\n");
printf("2. Subtracao(-)\n");
printf("3. Multiplicacao(*)\n");
printf("4. Divisao(/)\n");
printf("Opcao: ");
scanf("%d", &opcao);

if(opcao == 1){
    resultado = n1 + n2;
    printf("O resultado e: %.2f", resultado);
}else if(opcao == 2){
    resultado = n1 - n2;
    printf("O resultado e: %.2f", resultado);
}else if(opcao == 3){
    resultado = n1 * n2;
    printf("O resultado e: %.2f", resultado);
}else if(opcao == 4){
    resultado = n1 / n2;
    printf("O resultado e: %.2f", resultado);
}else{
    printf("Opcao invalida!\n");
}

return 0;
}