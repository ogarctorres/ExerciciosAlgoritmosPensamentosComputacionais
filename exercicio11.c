#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    printf("--- Calculadora de Equacao do 2o Grau Completa ---\n");
    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: Se 'a' eh 0, a equacao nao eh do segundo grau.\n");
        if (b != 0) printf("A raiz da equacao linear seria: %.2lf\n", -c / b);
        return 1;
    }

    delta = (b * b) - (4 * a * c);
    printf("Discriminante (Delta) calculado: %.2lf\n", delta);

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Existem duas raizes reais e distintas:\nx1 = %.2lf\nx2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Existe uma raiz real dupla:\nx = %.2lf\n", x);
    } else {
        double real_part = -b / (2 * a);
        double imag_part = sqrt(-delta) / (2 * a);
        printf("As raizes sao complexas conjugadas:\nx1 = %.2lf + %.2lfi\nx2 = %.2lf - %.2lfi\n", real_part, imag_part, real_part, imag_part);
    }
    return 0;
}
