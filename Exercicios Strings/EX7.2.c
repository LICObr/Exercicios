#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf(" %[^\n]", str1);
    
    printf("Digite a segunda string: ");
    scanf(" %[^\n]", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("As strings nao sao anagramas.\n");
        return 0;
    }

    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                str2[j] = '\0'; 
            }
        }
        if (str2[j] == '\0') {
            printf("As strings nao sao anagramas.\n");
            return 0;
        }
    }

    printf("As strings sao anagramas.\n");
    return 0;
}
