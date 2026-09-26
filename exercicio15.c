#include <stdio.h>

int main() {
    float n1, n2, n3, resultado;
    printf("--- Operacoes Condicionais Multiplas ---\n");
    printf("Digite o 1o numero: "); scanf("%f", &n1);
    printf("Digite o 2o numero: "); scanf("%f", &n2);
    printf("Digite o 3o numero: "); scanf("%f", &n3);
    
    if (n1 > n2 && n1 > n3) {
        resultado = n1 + n2 + n3;
        printf("Condicao A atendida (1o eh o maior).\n");
        printf("Soma dos 3 numeros: %.2f + %.2f + %.2f = %.2f\n", n1, n2, n3, resultado);
    } else if (n2 > n1 && n2 < n3) {
        resultado = n2 * n3;
        printf("Condicao B atendida (2o eh intermediario entre 1o e 3o).\n");
        printf("Produto do 2o pelo 3o: %.2f * %.2f = %.2f\n", n2, n3, resultado);
    } else {
        resultado = (n1 + n3) * n2;
        printf("Condicao C atendida (Nenhuma das anteriores).\n");
        printf("Soma do 1o com 3o multiplicada pelo 2o: (%.2f + %.2f) * %.2f = %.2f\n", n1, n3, n2, resultado);
    }
    return 0;
}
