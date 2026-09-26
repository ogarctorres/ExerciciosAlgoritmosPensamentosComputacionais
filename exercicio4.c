#include <stdio.h>

int main() {
    int mes, ano;
    char* meses[] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    printf("--- Mes por Extenso ---\n");
    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    if(mes < 1 || mes > 12) {
        printf("Mes invalido. Deve ser entre 1 e 12.\n");
        return 1;
    }
    
    printf("Digite o ano (para validacao bissexto): ");
    scanf("%d", &ano);
    
    printf("Resultado: %s de %d\n", meses[mes], ano);
    if(mes == 2) {
        int bissexto = ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0));
        printf("Detalhe: Este mes possui %d dias no ano informado.\n", bissexto ? 29 : 28);
    }
    return 0;
}
