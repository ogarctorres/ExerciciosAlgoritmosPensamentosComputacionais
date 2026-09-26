#include <stdio.h>

int main() {
    int a, b, c, menor;
    printf("--- Menor de 3 Valores ---\n");
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    
    printf("Os valores inseridos foram: %d, %d, %d\n", a, b, c);
    printf("O MENOR valor encontrado eh: %d\n", menor);
    return 0;
}
