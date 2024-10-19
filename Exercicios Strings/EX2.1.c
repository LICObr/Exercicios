#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    // Ler as duas strings
    
    printf("Digite o primeiro nome: ");
    scanf("%s", str1);

    printf("Digite o segundo nome: ");
    scanf("%s", str2);

    // Comparar as strings
    
    if(strcmp(str1, str2) == 0) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
