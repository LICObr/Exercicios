#include <stdio.h>

int main() {
	int num, maior, menor;

	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("Nenhum numero positivo foi inserido.\n");
		return main();
	}

	maior = num;
	menor = num;

	do{
		if (num > maior) {
			maior = num;
		}
		if (num < menor) {
			menor = num;
		}
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &num);
		
	}while (num >= 0);

	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);

	return 0;
}
