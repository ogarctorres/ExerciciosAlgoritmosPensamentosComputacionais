#include <stdio.h>

int main() {
    char nome[100];
    int cargo;
    float salario, novoSalario;
    
    printf("--- Gestao de RH: Reajustes ---\n");
    printf("Digite o primeiro nome do funcionario: ");
    scanf("%99s", nome);
    
    printf("Selecione o cargo:\n1- Gerente\n2- Tecnicos\n3- Auxiliares\n4- Outros\nOpcao: ");
    scanf("%d", &cargo);
    
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);
    
    printf("\n--- Extrato de Funcionario ---\nNome: %s\n", nome);
    switch(cargo) {
        case 1:
            novoSalario = salario * 1.05;
            printf("Cargo: Gerente (Reajuste de 5%%)\n");
            break;
        case 2:
            novoSalario = salario * 1.075;
            printf("Cargo: Tecnico (Reajuste de 7.5%%)\n");
            break;
        case 3:
            novoSalario = salario * 1.10;
            printf("Cargo: Auxiliar (Reajuste de 10%%)\n");
            break;
        default:
            novoSalario = salario * 1.04;
            printf("Cargo: Outros (Reajuste de 4%%)\n");
            break;
    }
    
    printf("Salario Anterior: R$ %.2f\n", salario);
    printf("Salario Reajustado: R$ %.2f\n", novoSalario);
    return 0;
}
