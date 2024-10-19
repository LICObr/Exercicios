#include <stdio.h>

int main() {
    char str[50], resultado[50];
    int j = 0;

    printf("Digite uma string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            resultado[j++] = c;
        }
    }

    resultado[j] = '\0';

    printf("String sem vogais: %s\n", resultado);
    return 0;
}
