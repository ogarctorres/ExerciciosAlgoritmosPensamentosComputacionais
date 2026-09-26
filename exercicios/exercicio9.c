#include <stdio.h>

int main() {
    int num;
    printf("--- Verificador de Multiplo de 7 ---\n");
    printf("Digite um valor numerico inteiro: ");
    scanf("%d", &num);
    
    if(num % 7 == 0) {
        printf("O numero %d EH multiplo de 7.\nDetalhamento: 7 x %d = %d\n", num, num/7, num);
    } else {
        int prox = num + (7 - (num % 7 < 0 ? (num % 7) + 7 : num % 7));
        printf("O numero %d NAO eh multiplo de 7.\nO multiplo de 7 mais proximo e maior seria %d.\n", num, prox);
    }
    return 0;
}
