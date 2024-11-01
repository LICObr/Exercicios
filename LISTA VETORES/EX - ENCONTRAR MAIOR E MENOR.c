// Crie um programa que:
// Solicite ao usuário que informe a quantidade de
// elementos de um vetor de int.
// Peça ao usuário para inserir os elementos do vetor.
// Determine e exiba o maior e o menor elemento do
// vetor

#include <stdio.h>

int main(){
    int elem;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &elem);
    
    int vetor[elem],maior, menor;
    int i = 0;
        
    for(i=0;i<elem;i++){
        printf("Digite o %d elemento: ",i+1);
        scanf("%d",&vetor[i]);
    }
    //maior/menor
    
    maior = vetor[0];
    menor = vetor[0];
    for(i=0;i<elem;i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("MAIOR - - MENOR \n");
    printf("%d          %d ",maior, menor);
    
    return 0;
}