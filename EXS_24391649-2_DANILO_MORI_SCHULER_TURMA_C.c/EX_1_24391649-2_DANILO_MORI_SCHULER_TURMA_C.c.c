#include <stdio.h>>
int main(){
	float valor, desconto, total;
	
	printf("Digite o valor da compra: ");
	scanf("%f",&valor);
	
if (valor <= 100){
	total = valor;
}
else if (valor > 100 && valor <= 500){
	total = valor - valor * 10/100;
	
}else{
	total = valor - valor * 20/100;	
}
	printf("O valor a pagar eh %f", total);
	
	
	return 0;
}
