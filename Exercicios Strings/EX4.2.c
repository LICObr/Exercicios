#include <stdio.h>
#include <string.h>

int main() {
	char str[100], resultado[100];
	int i, j = 0;
	int encontrado;

	printf("Digite uma string: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		encontrado = 0;

		for (int k = 0; k < j; k++) {
			if (str[i] == resultado[k]) {
				encontrado = 1;
			}
		}

		if (!encontrado) {
			resultado[j] = str[i];
			j++;
		}
	}

	resultado[j] = '\0';

	printf("String sem caracteres duplicados: %s\n", resultado);

	return 0;
}
