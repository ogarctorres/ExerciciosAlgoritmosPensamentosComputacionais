#include <stdio.h>

int main (void) {
    int codigo;
    float valor;

    printf("Digite o código de uma moeda: ");
    scanf("%d", &codigo );

    printf("Digite o valor: ");
    scanf("%f", &valor);

    
  switch (codigo) {
        case 1:
            printf("%.2f libra esterlina\n", valor);
            break;

        case 2:
            printf("%.2f franco suico\n", valor);
            break;

        case 3: 
            printf("%.2f dolar americano\n", valor);
            break;

        case 4:
            printf("%.2f marco alemao\n", valor);
            break;

        case 5:
            printf("%.2f real brasileiro\n", valor);
            break;

        default:
            printf("Código inválido\n");
            break;
    }
    
    return 0;
}

