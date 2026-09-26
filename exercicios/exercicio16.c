#include <stdio.h>

int main() {
    int num1, num2;
    printf("--- Analisador de Sinais ---\n");
    printf("Digite 2 numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 == 0 || num2 == 0) {
        printf("Z - Pelo menos um dos numeros eh igual a ZERO.\n");
    } else if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0)) {
        printf("M - Ambos possuem o MESMO sinal.\n");
    } else {
        printf("O - Eles possuem sinais OPOSTOS.\n");
    }
    return 0;
}
