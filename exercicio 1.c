#include <stdio.h>

int main(void) {
    int c1, c2, c3;
    int alim = 0, beb = 0, sob = 0;
    int erro = 0;
    float preco_alim = 0.0, preco_beb = 0.0, preco_sob = 0.0, total = 0.0;

    printf("Digite os 3 codigos do pedido: ");
    scanf("%d %d %d", &c1, &c2, &c3);

    if (c1 == c2 || c1 == c3 || c2 == c3) {
        erro = 1;
    }

    if (c1 >= 1 && c1 <= 4) alim = c1;
    else if (c1 >= 5 && c1 <= 6) beb = c1;
    else if (c1 >= 7 && c1 <= 9) sob = c1;
    else erro = 1;


    if (c2 >= 1 && c2 <= 4) {
        if (alim != 0) erro = 1;
        else alim = c2;
    } else if (c2 >= 5 && c2 <= 6) {
        if (beb != 0) erro = 1;  
        else beb = c2;
    } else if (c2 >= 7 && c2 <= 9) {
        if (sob != 0) erro = 1;  
        else sob = c2;
    } else erro = 1;

    if (c3 >= 1 && c3 <= 4) {
        if (alim != 0) erro = 1;
        else alim = c3;
    } else if (c3 >= 5 && c3 <= 6) {
        if (beb != 0) erro = 1;
        else beb = c3;
    } else if (c3 >= 7 && c3 <= 9) {
        if (sob != 0) erro = 1;
        else sob = c3;
    } else erro = 1;

    if (alim == 0 || beb == 0 || sob == 0) {
        erro = 1;
    }

    if (erro) {
        printf("Erro: pedido invalido ou item repetido!\n");
        return 0;
    }

    switch (alim) {
        case 1:
            printf("Alimentacao: hamburger - R$ 4.50\n");
            preco_alim = 4.50;
            break;
        case 2:
            printf("Alimentacao: chessburger - R$ 5.50\n");
            preco_alim = 5.50;
            break;
        case 3:
            printf("Alimentacao: cachorro quente - R$ 4.00\n");
            preco_alim = 4.00;
            break;
        case 4:
            printf("Alimentacao: sanduiche - R$ 3.50\n");
            preco_alim = 3.50;
            break;
    }

    switch (beb) {
        case 5:
            printf("Bebida: refrigerante - R$ 1.00\n");
            preco_beb = 1.00;
            break;
        case 6:
            printf("Bebida: suco de laranja - R$ 2.00\n");
            preco_beb = 2.00;
            break;
    }

    switch (sob) {
        case 7:
            printf("Sobremesa: milk shake - R$ 1.50\n");
            preco_sob = 1.50;
            break;
        case 8:
            printf("Sobremesa: sundae - R$ 3.00\n");
            preco_sob = 3.00;
            break;
        case 9:
            printf("Sobremesa: casquinha - R$ 1.00\n");
            preco_sob = 1.00;
            break;
    }

    total = preco_alim + preco_beb + preco_sob;
    printf("Preco final a pagar: R$ %.2f\n", total);

    return 0;
}