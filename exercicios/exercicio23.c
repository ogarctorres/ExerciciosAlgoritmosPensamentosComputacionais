#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int total_dias;
    printf("--- Calculadora Avancada de Idade ---\n");
    printf("Digite a idade expressa em dias: ");
    if (scanf("%d", &total_dias) != 1 || total_dias < 0) {
        printf("Entrada invalida. Digite um numero inteiro positivo.\n");
        return 1;
    }

    int anos = 0;
    int meses = 0;
    int dias = total_dias;
    int ano_atual = 2026; // Usando 2026 como base

    while (true) {
        int dias_no_ano = is_leap_year(ano_atual) ? 366 : 365;
        if (dias >= dias_no_ano) {
            dias -= dias_no_ano;
            anos++;
            ano_atual--; // Retrocedendo no tempo
        } else {
            break;
        }
    }

    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap_year(ano_atual)) {
        dias_por_mes[1] = 29;
    }

    int mes_atual = 0;
    while (mes_atual < 12 && dias >= dias_por_mes[mes_atual]) {
        dias -= dias_por_mes[mes_atual];
        meses++;
        mes_atual++;
    }

    printf("\nResultado detalhado:\n");
    printf("Idade exata: %d anos, %d meses e %d dias.\n", anos, meses, dias);
    printf("(Considerando variacoes de anos bissextos retroativos a partir de 2026)\n");

    return 0;
}
