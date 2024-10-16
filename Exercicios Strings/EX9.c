#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string[50] = "Hellow";
    char subs[50];
    int i;
    
    for(i = 0; i <= (strlen(string)); i++){
        subs[i] = toupper(string[i]);
        
    }
    printf("A palavra eh %s", subs);
   

    return 0;
}