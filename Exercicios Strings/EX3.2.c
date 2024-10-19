#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    // Ler as duas strings
    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    // Encontrar
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    // Exibir
    if (i > 0) {
        char prefixo_comum[100];
        strncpy(prefixo_comum, str1, i);
        prefixo_comum[i] = '\0';
        printf("O maior prefixo comum e: %s\n", prefixo_comum);
    } else {
        printf("Nao existe prefixo comum.\n");
    }

    return 0;
}
