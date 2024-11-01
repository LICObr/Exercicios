// Básicos:
// Ler 10 números inteiros e imprimir.
// Ler 10 números e imprimir na ordem inversa.

#include <stdio.h>

int main(){
    int vetor[10],i = 0;
    
    for(i=0;i<10;i++){
        printf("Digite o %d valor: ", i + 1);
        scanf("%d",&vetor[i]);
    }
    printf("Ordem normal: ");
    for(i=0;i<10;i++){
        printf(" %d ",vetor[i]);
    }
    printf("\nOrdem inversa: ");
    
    for(i=9;i>=0;i--){
        printf(" %d ",vetor[i]);
        
    }
    
    

    return 0;
}