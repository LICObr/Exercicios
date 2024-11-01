// Desenvolva um programa que:
// Peça ao usuário para informar o tamanho de um
// vetor de float.
// Solicite que o usuário insira os elementos desse vetor.
// Crie um novo vetor que contenha os elementos do
// vetor original na ordem inversa.
// Exiba os elementos do vetor invertido.

#include <stdio.h>

int main(){
    int elem;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &elem);
    
    float vetor1[elem],vetor2[elem];
    int i = 0;
        
    for(i=0;i<elem;i++){
        printf("Digite o %d elemento: ",i+1);
        scanf("%f",&vetor1[i]);
        vetor2[elem - i -1] = vetor1[i];
    }
    
    for(i=0;i<elem;i++){
        printf("VETOR 1: %.2f\n",vetor1[i]);
    }
    printf("\n");
    for(i=0;i<elem;i++){
    printf("VETOR2: %.2f\n",vetor2[i]);
    }

    
    return 0;
}