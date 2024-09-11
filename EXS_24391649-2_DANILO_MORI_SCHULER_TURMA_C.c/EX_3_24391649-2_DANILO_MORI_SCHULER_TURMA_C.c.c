#include <stdio.h>
int main(){
	char nota;
	float salario, final;
	
	printf("Digite o salario:\n ");
	scanf("%f",&salario);
	
	printf("Digite a nota:(A, B ou C))\n ");
	scanf(" %c" ,&nota);	
	
if(nota == 'A'){
	final = salario + salario * 15/100;
}
else if(nota =='B'){
	final = salario + salario * 10/100;
}
else if(nota == 'C'){
	final = salario + salario * 5/100;
	
}else{
 
 final = salario;
 
}
	
	printf("O salario final eh %f",final);
	
	
	
	
	
	return 0;
}
