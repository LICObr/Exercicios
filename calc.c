#include <stdio.h> //entradas e saidas.
    double soma(double n1, double n2);
    double sub(double n1, double n2);
    double mult(double n1, double n2);
    double divs(double n1, double n2);
    int main(){
        double valor1, valor2;
        char operacao;
        printf("Escolha uma operacao:\n+ adicao\n- subtracao\n/ divisao\n* multiplicacao ");
        scanf("%c",&operacao);
  		printf("Digite o primeiro numero: ");
  		scanf("%lf",&valor1);
  		printf("Digite o segundo numero: ");
  		scanf("%lf",&valor2);
  		switch(operacao){
  			case'+':
  				printf("O resultado da soma é %f",soma(valor1,valor2));
  				break;
  			case'-':
  				printf("O resultado da subtracao é %f",sub(valor1,valor2));
  				break;
  			case'*':
  				printf("O resultado da multiplicacao é %f",mult(valor1,valor2));
  				break;
  			case'/':
  				printf("O resultado da divisao é %f",divs(valor1,valor2));
  				break;
		  default:
		  	printf("Operacao %c invalida",operacao);
  		}
        return 0;
    }
    
    double soma(double n1, double n2){
        return n1+n2;
    }
     double sub(double n1, double n2){
         return n1-n2;
     }
     double mult(double n1, double n2){
         return n1*n2;
     }
     double divs(double n1, double n2){
         return n1/n2;
     }
