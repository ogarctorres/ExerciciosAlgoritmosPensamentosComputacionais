#include <stdio.h>

int main() {
    int num;
    printf("--- Verificador de Divisibilidade por 2 ou 3 ---\n");
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    
    int div2 = (num % 2 == 0);
    int div3 = (num % 3 == 0);
    
    if(div2 && div3) {
        printf("O numero %d eh divisivel por 2 e por 3 simultaneamente.\n", num);
    } else if(div2) {
        printf("O numero %d eh divisivel APENAS por 2.\n", num);
    } else if(div3) {
        printf("O numero %d eh divisivel APENAS por 3.\n", num);
    } else {
        printf("O numero %d NAO eh divisivel nem por 2 nem por 3.\n", num);
    }
    return 0;
}
