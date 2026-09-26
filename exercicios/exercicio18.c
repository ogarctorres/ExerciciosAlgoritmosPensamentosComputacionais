#include <stdio.h>

int main() {
    float salario, novoSalario, aumento;
    int percentual;
    printf("--- Calculo de Reajuste Salarial ---\n");
    printf("Digite o salario atual do funcionario: R$ ");
    scanf("%f", &salario);
    
    if(salario < 0) {
        printf("Salario invalido.\n");
        return 1;
    }
    
    if (salario < 2000.00) {
        percentual = 10;
    } else if (salario >= 2000.00 && salario <= 5000.00) {
        percentual = 7;
    } else {
        percentual = 3;
    }
    
    aumento = salario * (percentual / 100.0);
    novoSalario = salario + aumento;
    
    printf("\n--- Detalhamento do Reajuste ---\n");
    printf("Salario Anterior : R$ %.2f\n", salario);
    printf("Percentual       : %d%%\n", percentual);
    printf("Valor do Aumento : R$ %.2f\n", aumento);
    printf("Novo Salario     : R$ %.2f\n", novoSalario);
    return 0;
}
