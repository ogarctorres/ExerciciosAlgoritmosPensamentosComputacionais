#include <stdio.h>

int main() {
    float a, b, c;
    printf("--- Comparacao A+B vs C ---\n");
    printf("Digite os valores de A, B e C (separados por espaco): ");
    if(scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }
    
    float soma = a + b;
    printf("Calculo: A + B = %.2f\nValor de C = %.2f\n", soma, c);
    
    if(soma < c) {
        printf("A soma de A + B eh MENOR que C (diferenca: %.2f)\n", c - soma);
    } else if(soma > c) {
        printf("A soma de A + B eh MAIOR que C (diferenca: %.2f)\n", soma - c);
    } else {
        printf("A soma de A + B eh IGUAL a C\n");
    }
    return 0;
}
