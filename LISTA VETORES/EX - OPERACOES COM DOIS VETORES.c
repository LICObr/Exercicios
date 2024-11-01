// Somar dois vetores.
// Subtrair dois vetores.
// Realizar a soma entre dois vetores, porém deve-se
// somar a posição + 1 do primeiro vetor, e o resultado
// deve ser atribuído em outro vetor do mesmo tipo.
// Apresente todos os vetores.
//Verificar se dois vetores são iguais.
#include <stdio.h>

int main(){
    int vetor1[3]={1,2,3}, vetor2[3]={4,5,6}, vetor3[3], i=0;
    int soma =0, sub =0, soma1 =0;
    int verificar;
    
    //soma e sub
    
    do{
        soma += (vetor1[i] + vetor2[i]);
        sub -=  (vetor1[i] - vetor2[i]);
        
        i++;
    }while(i<3);
    
     // somar a posição + 1 do primeiro vetor, e o resultado
     // deve ser atribuído em outro vetor do mesmo tipo.
    
    i=0;
    do{
        vetor3[i] = (vetor1[i] + vetor1[i+1]);
        
        i++;
    }while(i<3);
    
    //verificar se sao iguais
    
    for(i=0;i<3;i++){
        if(vetor1[i] == vetor2[i]){
        verificar = 1;
        }
        else{
            verificar = 0;
        }
    }
    if(verificar == 1){
        printf("Sao iguais\n");
        }
    if(verificar == 0){
            printf("Sao diferentes\n");
        }
    
    

    
    //apresentar vetores
    
    printf("Soma: %d, Sub: %d\n",soma, - sub);
    
    printf("VETOR1: ");
    for(i=0;i<3;i++){
    printf("%d ",vetor1[i]);
    }
    printf("VETOR3: ");
    for(i=0;i<3;i++){
    printf("%d ",vetor3[i]);
    }
    
    
    

    return 0;
}