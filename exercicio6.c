#include <stdio.h>

int main() {
    long long a, b, c;
    printf("--- Operacoes com Dois Valores ---\n");
    printf("Digite os valores inteiros de A e B: ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }
    
    if(a == b) {
        c = a + b;
        printf("Valores iguais. Realizando soma.\nResultado (C) = %lld\n", c);
    } else {
        c = a * b;
        printf("Valores diferentes. Realizando multiplicacao.\nResultado (C) = %lld\n", c);
    }
    return 0;
}
