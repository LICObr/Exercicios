#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "teste";
    int i;
    
    for(i = (strlen(nome)); i >=0 ; i--){
        
        printf("%c",nome[i]);
        
    }
   

    return 0;
}