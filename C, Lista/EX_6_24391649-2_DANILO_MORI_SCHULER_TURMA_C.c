#include <stdio.h>
int main(){
	int num1,num2;
	
	printf("Digite dois numeros inteiros.\n");
	scanf("%d %d",&num1,&num2);
	
	if(num2==0){
		printf("soma %d, sub %d, mult %d, div por 0 n existe",(num1 + num2),(num1 - num2),(num1 * num2));
	}else{
		printf("soma %d, sub %d, mult %d, div %d",(num1 + num2),(num1 - num2),(num1 * num2),(num1 / num2));
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
