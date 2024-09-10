#include <stdio.h>
int main(){
	float dolar,real,conv;	
	
	printf("Digite o valor da cotacao do dolar\n");
	scanf("%f",&dolar);
	
	printf("Digite o valor em reais a ser convertido\n");
	scanf("%f",&real);
	
	(conv = real*dolar);
	printf("O valor convertido eh %f",conv);
	
	
	
	
	
	
	
	
	return 0;
}
