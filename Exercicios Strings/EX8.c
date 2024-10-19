#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int cont = 0;

    printf("Digite a string: ");
    scanf(" %[^\n]", str);
    
    printf("Digite a substring: ");
    scanf(" %[^\n]", sub);

    for (int i = 0; i <= strlen(str) - strlen(sub); i++) {
        if (strncmp(&str[i], sub, strlen(sub)) == 0) {
            cont++;
        }
    }

    printf("A substring '%s' ocorre %d vezes.\n", sub, cont);

    return 0;
}
