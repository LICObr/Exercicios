#include <stdio.h>

int main() {
    char frase[200];
    int contador = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\t') {
            if (i > 0 && frase[i - 1] != ' ' && frase[i - 1] != '\n' && frase[i - 1] != '\t') {
                contador++;
            }
        }
    }

    if (frase[0] != '\0') {
        contador++;
    }

    printf("Numero de palavras: %d\n", contador);

    return 0;
}
