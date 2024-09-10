#include <stdio.h>
int fun(int num1, int num2){

if(num1 > num2){
return num1;
}else{
return num2;
}
}



int main(){
	int num1,num2;
		printf("Digite o primeiro e o segundo numero\n");
		scanf("%d %d",&num1,&num2);
	
	printf("O maior eh %d",fun(num1,num2));
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
