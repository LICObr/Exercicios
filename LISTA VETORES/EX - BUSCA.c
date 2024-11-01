// Verificar se um número pertence ao vetor.
// Contar quantas vezes um dado número aparece no
// vetor.
// Encontrar a primeira posição de um número no vetor.

#include <stdio.h>

int main(){
    int vetor[8], i, pertence = 0;
    
    //receber numeros
    
    for(i = 0; i<5; i++) {

		printf("Digite o %d valor: ", i+1);
		scanf("%d",&vetor[i]);
	}
	
	//verificar se pertence - vetor[5] == verificarnumero, vetor[6] == posicao
	
	printf("Digite um numero para verificar se pertence ao vetor: ");
	scanf("%d",&vetor[5]);
	
	vetor[7] = 0;
	
	for(i = 0; i < 5; i++){
	    if(vetor[5] == vetor[i]){
	       pertence = 1;
	       vetor[6] = i;
	    }
	}
	if(pertence == 1){
	        printf("\nPertence ao vetor na primeira posicao: %d",vetor[6]);
	    }
	    if(pertence == 0){
	        printf("\nNao pertence ao vetor");
	    }
	    
	    //Contar quantas vezes um numero aparece no vetor. vetor[7] == cont
	    
	    for(i = 0; i<5; i++){
	        if(vetor[5] == vetor[i]){
	            vetor[7] ++;
	        }
	    }
	    printf("\nO numero: %d aparece: %d vezes no vetor", vetor[5],vetor[7]);
	    
	
	

    return 0;
}