#include<stdio.h>
int main(){
    int num;
    int qp(int x);

    printf("Digite um numero para saber se eh um quadrado perfeito: ");
    scanf("%i",&num);
    qp(num);
}
int qp(int x){
    
   int exp_n2=0;
   
   int exp_n3=0;
   
   int exp_n5=0;
   
   int exp_n7=0;
   
   int teste1=0;
   
   int teste2=0;
   
   int teste3=0;
   
   int teste4=0;

    while(x >1 ){
        
        while (x % 2 == 0){
            x = x / 2;
            exp_n2++;
        }
        while (x % 3 == 0){
            x = x/3;
            exp_n3++;
        }
        while (x % 5 == 0){
            x = x / 5;
            exp_n2++;
        }
        while (x % 7 == 0){
            x= x / 7;
            exp_n7++;
        }
    }
    if(exp_n2 == 0 || exp_n2 %2 == 0){
        teste1 = 1;
    }
    if(exp_n3 == 0 || exp_n3 % 2 == 0){
        teste2 = 1;
    }
    if(exp_n5 ==0 || exp_n5 % 2 == 0){
        teste3 = 1;
    }
    if(exp_n7 == 0 || exp_n7 % 2 == 0){
        teste4 = 1;
    }

    if(teste1 && teste2 && teste3 && teste4 == 1){
        printf("Eh um quadrado perfeito");
    }
    else{
        printf("N eh um quadrado perfeito");
    }
}
