#include <stdio.h>

int main() {
    int valor, notas100, notas50, notas20, notas10, notas5;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas20 = valor / 20;
    valor %= 20;

    notas10 = valor / 10;
    valor %= 10;

    notas5 = valor / 5;
    valor %= 5;

    printf("Notas de 100: %d\n", notas100);
    
    printf("Notas de 50: %d\n", notas50);
    
    printf("Notas de 20: %d\n", notas20);
    
    printf("Notas de 10: %d\n", notas10);
    
    printf("Notas de 5: %d\n", notas5);

    return 0;
}
