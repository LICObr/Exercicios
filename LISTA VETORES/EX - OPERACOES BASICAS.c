// Calcular a soma de todos os elementos de um vetor.
// Encontrar o maior e o menor valor de um vetor.
// Calcular a media dos elementos de um vetor

#include <stdio.h>

int main() {
	int vetor[5], i = 0, comparadorM, comparadorm, soma = 0;
	float media;

    //entrada de valores e soma
    
	for(i = 0; i<5; i++) {

		printf("Digite o %d valor: ", i+1);
		scanf("%d",&vetor[i]);
		soma += vetor[i];
	}
	
	//comparador 
	
	comparadorm = vetor[0];
	comparadorM = vetor[0];
	
	for(i = 1; i<5; i++){
	    
	    if(vetor[i] > comparadorM){
	        comparadorM = vetor[i];
	    }
	    if(vetor[i] < comparadorm){
	        comparadorm = vetor[i];
	    }
	}
	
	//encontrar media
	
	media = soma / 5.0;
	
	printf("\nSoma: %d - ", soma);
	printf("Maior: %d, Menor: %d - ",comparadorM, comparadorm);
	printf("Media: %.2f",media);
	




	return 0;
}