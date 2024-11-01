// Crie um programa que:
// Solicite ao usuário que informe a quantidade de notas
// que deseja inserir.
// Crie um vetor de float para armazenar essas notas.
// Após a entrada das notas, calcule e exiba a média
// delas.

#include <stdio.h>

int main(){
    
    int i, quantidade;
    
    //receber quantidade
    
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);
    
    float notas[quantidade];
    
    for(i=0;i<quantidade;i++){
        printf("Digite a %d nota: ",i+1);
        scanf("%f", &notas[i]);
        
        if(notas[i] < 0 || notas[i] > 10){
            printf("Nota invalida, digite novamente:\n");
            i--;
        }
    }
    
    //calcular media
    
    float media;
    
    for(i=0;i<quantidade;i++){
        media += notas[i];
    }
    media = media/quantidade;
    
    printf("A media e: %.1f", media);

    return 0;
}