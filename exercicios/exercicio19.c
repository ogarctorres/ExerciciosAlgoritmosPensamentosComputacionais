#include <stdio.h>
#include <ctype.h>

int main() {
    char c, lowerC;
    printf("--- Analisador de Letras ---\n");
    printf("Digite um caractere qualquer: ");
    scanf(" %c", &c);
    
    if (!isalpha(c)) {
        printf("O caractere '%c' nao eh uma letra valida do alfabeto.\n", c);
        return 0;
    }
    
    lowerC = tolower(c);
    if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
        printf("A letra '%c' eh uma VOGAL.\n", c);
    } else {
        printf("A letra '%c' eh uma CONSOANTE.\n", c);
    }
    return 0;
}
