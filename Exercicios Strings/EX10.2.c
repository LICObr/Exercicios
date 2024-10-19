#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequencia[256] = {0};

    printf("Digite uma string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        frequencia[str[i]]++;
    }

    printf("Frequencia:\n");
    for (int i = 0; i < 256; i++) {
        if (frequencia[i] > 0) {
            printf("'%c': %d\n", i, frequencia[i]);
        }
    }

    return 0;
}
