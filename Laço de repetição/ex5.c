#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int numaleatorio, num;
	char escolha;

	do {
		srand(time(NULL));
		numaleatorio = (rand() % 100) + 1;

		printf("Jogo de Advinhacao, digite um numero: ");

		do {

			scanf("%d",&num);

			if(num > numaleatorio) {
				printf("Tente um numero menor!\n");
			}
			else if(num < numaleatorio) {
				printf("Tente um numero maior!\n");
			} else printf("PARABENS!!!\n");

		} while(num != numaleatorio);

		printf("Deseja jogar novamente (S/N)? ");
		scanf(" %c", &escolha);

	} while (escolha == 'S' || escolha == 's');








	return 0;
}
