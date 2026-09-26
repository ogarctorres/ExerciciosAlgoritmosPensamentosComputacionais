#include <stdio.h>
#include <ctype.h>

int main() {
    char tipo;
    float litros, preco = 0, total;
    printf("--- Sistema de Posto de Combustivel ---\n");
    printf("A - Alcool (R$ 1.7997/L)\nD - Diesel (R$ 0.9798/L)\nG - Gasolina (R$ 2.1009/L)\n");
    printf("Escolha o tipo de combustivel: ");
    scanf(" %c", &tipo);
    tipo = toupper(tipo);
    
    if(tipo == 'A') preco = 1.7997;
    else if(tipo == 'D') preco = 0.9798;
    else if(tipo == 'G') preco = 2.1009;
    else {
        printf("Tipo de combustivel invalido.\n");
        return 1;
    }
    
    printf("Digite a quantidade em litros: ");
    scanf("%f", &litros);
    if (litros < 0) { printf("Volume invalido.\n"); return 1; }
    
    total = litros * preco;
    // Implementacao elaborada: desconto para grandes volumes
    if(litros >= 50) {
        total *= 0.98;
        printf("\nAplicado desconto de 2%% para abastecimento de 50L ou mais!\n");
    }
    
    printf("Valor a ser pago: R$ %.4f\n", total);
    return 0;
}
