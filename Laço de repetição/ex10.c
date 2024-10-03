#include <stdio.h>

int main() {
	float mediaA, mediaB, na,nb;
	int qnt,i=1;

	printf("Digite a quantidade de alunos: ");
	scanf("%d",&qnt);

	for(i=1; i<=qnt; i++) {
		printf("Nota do %d aluno na materia A: ",i);
		scanf("%f",&na);

		mediaA += na;

		printf("Nota do %d aluno na materia B: ",i);
		scanf("%f",&nb);

		mediaB+= nb;
	}

	mediaA = mediaA/qnt;
	mediaB = mediaB/qnt;

	printf("Media A e B consecultivamente: %f e %f ",mediaA,mediaB);





	return 0;
}
