#include <stdio.h>

int main() {
    int n1, n2;
    printf("--- Analisador de Paridade ---\n");
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    if (n1 % 2 == 0 && n2 % 2 == 0) {
        printf("Pares\nDetalhe: Ambos podem ser divididos por 2 sem resto.\n");
    } else if (n1 % 2 != 0 && n2 % 2 != 0) {
        printf("Impares\nDetalhe: Nenhum deles pode ser dividido por 2 sem resto.\n");
    } else {
        printf("Existem um numero par e um impar\n");
    }
    return 0;
}
