#include <stdio.h>

int main() {
    int nums[4], menor, i, j;
    printf("--- Menor de 4 Numeros Distintos ---\n");
    for(i = 0; i < 4; i++) {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &nums[i]);
        // Validacao de numero distinto
        for(j = 0; j < i; j++) {
            if(nums[i] == nums[j]) {
                printf("Erro: O numero deve ser distinto dos anteriores. Tente novamente.\n");
                i--;
                break;
            }
        }
    }
    
    menor = nums[0];
    for(i = 1; i < 4; i++) {
        if(nums[i] < menor) menor = nums[i];
    }
    
    printf("\nO menor numero validado eh: %d\n", menor);
    return 0;
}
