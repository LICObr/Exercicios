#include <stdio.h>
#include <string.h>

int main(){
    char nome[] = "teste";
    char subs[50];
    int i;
    
    for(i = 0; i <= (strlen(nome)); i++){
        subs[i] = nome[i];
        if(nome[i] == 'e'){
            subs[i] = '1';
        }
    }
    printf("A palavra eh %s", subs);
   

    return 0;
}