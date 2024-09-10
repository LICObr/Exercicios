#include <stdio.h>

int main(){
    float num,dec;
    
	printf("Digite um numero\n");
	scanf("%f",&num);
	
	int inteiro;
	inteiro = -(inteiro - num);
	
	dec = (num - inteiro);
		
	printf("A parte inteira eh %d e decimal %f",inteiro,dec);
	
	
	
	
	    
    return 0;
}
