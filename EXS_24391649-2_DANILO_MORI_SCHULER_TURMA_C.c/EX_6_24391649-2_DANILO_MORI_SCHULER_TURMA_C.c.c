#include <stdio.h>

int main(){
    int qtd;
    float preco, desconto, valortot = 0.0;

    printf("Digite a quantidade de itens comprados: ");
    scanf("%d", &qtd);

    for (int i = 1; i <= qtd; i++) {
        printf("Digite o preço do produto %d: ", i);
        scanf("%f", &preco);

        if (preco > 100) {
            desconto = preco * 0.1; 
        } else {
            desconto = 0;
        }

        valortot += (preco - desconto);
    }

    printf("Valor total da compra: %.2f\n", valortot);
    return 0;
}

