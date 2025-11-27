#include <stdio.h>

// Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.


int main() {
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    printf("os divisores de %d sao: ", num);
    
    for (int i=1; i<=num; i++) {
        if (num % i == 0) {
            printf("%d", i);
            if (i <num) {
                printf(", ");
            }
        }
    }
    
    printf("\n");
    
    return 0;
}
