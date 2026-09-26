#include <stdio.h>

int main() {
    float v[4], media;
    int tipo;
    
    printf("--- Central de Estatistica ---\n");
    printf("Digite quatro valores reais:\n");
    for(int i = 0; i < 4; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &v[i]);
    }
    
    printf("\nEscolha o tipo de media:\n1) Aritmetica\n2) Ponderada\n3) Harmonica\nOpcao: ");
    scanf("%d", &tipo);
    
    if (tipo == 1) {
        media = (v[0] + v[1] + v[2] + v[3]) / 4.0;
        printf("\nMedia Aritmetica calculada: %.4f\n", media);
    } else if (tipo == 2) {
        float p[4], somaPesos = 0, somaPonderada = 0;
        printf("\nDigite os 4 pesos respectivamente:\n");
        for(int i = 0; i < 4; i++) {
            printf("Peso %d: ", i+1);
            scanf("%f", &p[i]);
            somaPesos += p[i];
            somaPonderada += v[i] * p[i];
        }
        if(somaPesos == 0) {
            printf("Erro: A soma dos pesos nao pode ser zero.\n");
            return 1;
        }
        media = somaPonderada / somaPesos;
        printf("\nMedia Ponderada calculada: %.4f\n", media);
    } else if (tipo == 3) {
        float somaInversos = 0;
        for(int i = 0; i < 4; i++) {
            if (v[i] == 0) {
                printf("\nErro: Valores nao podem ser zero para calculo de media harmonica.\n");
                return 1;
            }
            somaInversos += 1.0 / v[i];
        }
        media = 4.0 / somaInversos;
        printf("\nMedia Harmonica calculada: %.4f\n", media);
    } else {
        printf("Opcao invalida.\n");
    }
    
    return 0;
}
