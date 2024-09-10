#include <stdio.h>
int main(){
	
	int maior, num1, num2;
		
		printf("Digite o primeiro num\n");
		scanf("%d",&num1);
			
		printf("Digite o segundo num\n");
		scanf("%d",&num2);
			
	
	if(num1 > num2){
		printf("O %d eh maior",num1);
	}else{
		printf("O %d eh maior",num2);
	}
	
	
	return 0;
}
