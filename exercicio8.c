#include <stdio.h>

int main() {
    float n[3];
    int i, j;
    printf("--- Ordenacao Crescente ---\n");
    printf("Digite 3 valores distintos: ");
    scanf("%f %f %f", &n[0], &n[1], &n[2]);
    
    if (n[0]==n[1] || n[0]==n[2] || n[1]==n[2]) {
        printf("Aviso: Os valores nao sao todos distintos.\n");
    }
    
    // Bubble sort simples para 3 elementos
    for(i = 0; i < 2; i++) {
        for(j = i + 1; j < 3; j++) {
            if(n[i] > n[j]) {
                float aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }
    
    printf("Valores em ordem crescente: %.2f, %.2f, %.2f\n", n[0], n[1], n[2]);
    return 0;
}
