#include <stdio.h>

int main() {
    int codigo, qtd;
    float preco, totalCompra = 0;
    
    printf("--- Sistema de Loja de Materiais ---\n");
    printf("Codigos padrao: 123 (Verniz maritimo), 456 (Seladora), 789 (Verniz comum)\n");
    
    while(1) {
        printf("\nDigite o codigo do produto (ou 0 para encerrar): ");
        scanf("%d", &codigo);
        if (codigo == 0) break;
        
        printf("Quantidade: ");
        scanf("%d", &qtd);
        
        if (codigo == 123) { preco = 15.80; }
        else if (codigo == 456) { preco = 10.52; }
        else if (codigo == 789) { preco = 12.78; }
        else {
            printf("Produto nao padronizado. Digite o valor unitario: R$ ");
            scanf("%f", &preco);
        }
        
        float subtotal = preco * qtd;
        totalCompra += subtotal;
        printf("Item adicionado! Subtotal: R$ %.2f\n", subtotal);
    }
    
    printf("\nTotal geral da compra: R$ %.2f\n", totalCompra);
    return 0;
}
