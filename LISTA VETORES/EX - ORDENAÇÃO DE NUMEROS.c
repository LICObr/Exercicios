// Implemejte um programa que:
// Solicite ao usuário que insira 5 números inteiros.
// Armazene esses números em um vetor de int.
// Ordene o vetor em ordem crescente e exiba o vetor
// ordenado.

#include <stdio.h>

int main(){
    int i,j, vetor[5];
    int temp;
    
    for(i=0;i<5;i++){
        printf("Digite %d numero inteiro: ",i+1);
        scanf("%d", &vetor[i]);
    }
    
    for(i=0;i<5;i++){
        for(j = 0; j < 4 - i; j++){
            
            if(vetor[j] > vetor[j + 1]){
                
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
            
    }
    printf("Vetor ordenado: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}