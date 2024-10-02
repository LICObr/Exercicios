#include <stdio.h>

int main(){
    
   char chose;
   float temp, C, F;
   
   printf("Para converter para Fahrenheit digite F: \n");
   printf("Para converter para Celsius digite C:\n ");
   scanf("%c",&chose);
   
   while(chose == 'c' || chose == 'C'){
       chose='d';
       printf("Digite a temperatura em Fahrenheit: ");
       scanf("%f",&temp);
       C = (temp-32)/1.8;
          printf("O valor convertido eh %f",C);
     
    }
   while(chose == 'F' || chose == 'f'){
       chose='d';
       printf("Digite a temperatura em Celsius: ");
       scanf("%f",&temp);
       F= (temp*1.8)+32;
          printf("O valor convertido eh %f",F);
       }
   
 
  
   
   
   
   
   
   
    return 0;
}
