#include <stdio.h>
#include <stdlib.h>
int main(){
	
    int result = 52, num;
    printf("DIGITE UM NUMERO ENTRE 0 A 100\n");
    scanf("%d",&num);
if(num < result){
    printf("O NUMERO � MAIOR\n");
}
if(num > result){
    printf("O NUMERO � MENOR\n");
}
if(num == result){
    printf("ACERTOU, o numero � %d \n",num);
}
else if(num > 100 || num < 0){
    printf("O NUMERO N�O ESTA NO INTERVALO \n");
    return main();
    
}else{
   
    printf("Tente novamente!\n");
    return main();
}
    
    
return 0;
}
