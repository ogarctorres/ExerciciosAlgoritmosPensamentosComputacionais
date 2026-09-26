#include <stdio.h>

int main() {
    float diariaNormal, diariaPromo, total80, total50, diferenca;
    int aptos = 75;
    
    printf("--- Simulador de Arrecadacao de Hotel ---\n");
    printf("Digite o valor normal da diaria: R$ ");
    scanf("%f", &diariaNormal);
    
    diariaPromo = diariaNormal * 0.75; // Desconto de 25%
    total80 = (aptos * 0.80) * diariaPromo;
    total50 = (aptos * 0.50) * diariaNormal;
    diferenca = total80 - total50;
    
    printf("\n--- Resultados do Fim de Semana Promocional ---\n");
    printf("a) Valor da diaria promocional: R$ %.2f\n", diariaPromo);
    printf("b) Arrecadacao esperada com 80%% de ocupacao (promocao): R$ %.2f\n", total80);
    printf("c) Arrecadacao esperada com 50%% de ocupacao (sem promocao): R$ %.2f\n", total50);
    
    if (diferenca > 0) {
        printf("d) Diferenca: O hotel lucrara R$ %.2f a mais com a promocao!\n", diferenca);
    } else {
        printf("d) Diferenca: A promocao gerara um prejuizo de R$ %.2f.\n", -diferenca);
    }
    return 0;
}
