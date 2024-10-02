#include <stdio.h>

int main() {
    int i = 1, soma=0, num;
    float media;

do{
 
    printf("Digite o %d numero: ",i);
    scanf("%d",&num);
    i++;
    soma = soma + num;
    media = soma/5;
    
}while(i<=5);

printf("A media eh %f",media);

    return 0;
}

