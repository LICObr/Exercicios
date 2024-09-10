#include <stdio.h>
int main(){
	
	float mas, alt,imc;
	
	printf("Digite a massa e altura\n");
	scanf("%f %f",&mas,&alt);
	
	imc = mas/(alt*alt);
	
	printf("O imc eh %f",imc);
	
	
	
	return 0;
}
