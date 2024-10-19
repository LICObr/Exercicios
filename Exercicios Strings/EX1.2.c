#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char frase[50], frasefinal[50];
    int i = 0, j = 0;
    
    //ler frase
    
    printf("Digite uma frase: ");
    scanf("%[^\n]",frase );
    
    for(i = 0 ; i < strlen(frase) ; i++){
        if(frase[i] != ' '){
            frasefinal[j] = frase[i] ;
            j++;
        }
    }
    
    frasefinal[i] = '\0';
    printf("%s",frasefinal);

    return 0;
}
