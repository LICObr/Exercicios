#include <stdio.h>

int main() {
    int num, i;
    int primo = 1; 

    printf("Digite um num para verificar se é primo: ");
    scanf("%d", &num);

    if (num < 2) {
        primo = 0;
    }else{
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0; 
        }
       }
    }

    if (primo){
        printf("E primo\n");
    } else {
        printf("Não e primo\n");
    }

    return 0;
}
