#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], resultado[200];
    int i, j = 0;

    printf("Digite a primeira string: ");
    scanf(" %[^\n]", str1);
    
    printf("Digite a segunda string: ");
    scanf(" %[^\n]", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1 > len2 ? len1 : len2;

    for (i = 0; i < len; i++) {
        if (i < len1) {
            resultado[j++] = str1[i];
        }
        if (i < len2) {
            resultado[j++] = str2[i];
        }
    }

    resultado[j] = '\0';

    printf("String: %s\n", resultado);
    return 0;
}
