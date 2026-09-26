#include <stdio.h>
#include <ctype.h>

int main() {
    char sexo;
    float altura, peso;
    printf("--- Calculadora de Peso Ideal ---\n");
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);
    
    if(sexo != 'M' && sexo != 'F') {
        printf("Sexo invalido! Use M ou F.\n");
        return 1;
    }
    printf("Altura (em metros): ");
    scanf("%f", &altura);
    
    if(altura <= 0.5 || altura >= 3.0) {
        printf("Altura fora do padrao (0.5m a 3.0m)!\n");
        return 1;
    }
    
    peso = (sexo == 'M') ? (72.7 * altura) - 58 : (62.1 * altura) - 44.7;
    printf("Seu peso ideal calculado eh: %.2f kg\n", peso);
    return 0;
}
