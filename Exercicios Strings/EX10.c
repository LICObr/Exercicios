#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char Frase[100];
    int i = 0;

    // Receber a frase
    
    printf("Digite uma frase: ");
    scanf("%99[^\n]", Frase); // ler ate encontrar nova linha

    //dividir e mostrar cada palavra
    
    printf("\nPalavras individuais:\n");
    while (Frase[i] != '\0'){
        
        if (Frase[i] == ' ' || Frase[i] == '\n') {
            
            printf("\n");  // Se encontrar um espaço, quebra a linha
        } else {
            printf("%c", Frase[i]); //imprimir
        }
        i++;
    }

    return 0;
}
