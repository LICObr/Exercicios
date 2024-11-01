// Contagem de Números Pares e Ímpares
// Desenvolva um programa que:
// Peça ao usuário para inserir 10 números inteiros.
// Armazene esses números em um vetor de int.
// Conte e exiba quantos desses números são pares e
// quantos são ímpares.

#include <stdio.h>

int main(){
    int i, vetor[10];
    char par[3] = "par", impar[5] = "impar";
    int pr=0,imp=0;
    
    for(i=0;i<10;i++){
        printf("Digite %d numero inteiro: ",i+1);
        scanf("%d", &vetor[i]);
        
        if(vetor[i] % 2 == 0){
            pr++;
        }
        else{
            imp++;
        }
    }
    printf("PARES: %d /// IMPARES: %d",pr,imp);
    
    return 0;
}