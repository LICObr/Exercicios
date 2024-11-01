// Desenvolva um programa que:
// Solicite ao usuário que informe o tamanho de um
// vetor de float.
// Peça para o usuário inserir os elementos desse vetor.
// Crie um segundo vetor que será uma cópia do
// primeiro.
// Exiba os elementos do vetor copiado
#include <stdio.h>

int main(){
    int elem;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &elem);
    
    float vetor1[elem], vetor2[elem];
    int i = 0;
    
    for(i=0;i<elem;i++){
        printf("Digite o %d elemento: ",i+1);
        scanf("%f",&vetor1[i]);
        vetor2[i] = vetor1[i];
    }
    printf("Valores: \n");
    for(i=0;i<elem;i++){
        printf("%.1f ",vetor2[i]);
    }
    return 0;
}