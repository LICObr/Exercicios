#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];
    int posicao, tamanho;

    printf("Digite a string principal: ");
    scanf(" %[^\n]", str);

    printf("Digite a posicao inicial: ");
    scanf("%d", &posicao);
    
    printf("Digite o tamanho da substring: ");
    scanf("%d", &tamanho);

    if (posicao < 0 || posicao >= strlen(str) || tamanho < 0) {
        printf("Posicao ou tamanho invalidos.\n");
    } else {
        strncpy(substr, str + posicao, tamanho);
        substr[tamanho] = '\0';

        printf("Substring extraida: %s\n", substr);
    }

    return 0;
}
