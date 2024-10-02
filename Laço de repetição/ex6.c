#include <stdio.h>

int main(){
    
 int i,num;
 float alt, media=0;
    i=1;
    printf("Digite o numero de alunos: ");
    scanf("%d",&num);
    
    for(i=1 ; i<=num ; i++){
        printf("Digite a altura do %dº aluno: ",i);
        scanf("%f",&alt);
        
        media = media + alt;
        
    }
   media = media/num;
   printf("A media eh: %f ",media);

    return 0;
}
