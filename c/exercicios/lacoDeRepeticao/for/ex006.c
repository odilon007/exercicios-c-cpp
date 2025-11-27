#include <stdio.h>

// Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.


int main() {
    int maior, menor, num;
    
    printf("Digite um valor: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    for (int i = 1; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num);
        
        if (num > maior) {
            maior = num;  
        }
        if (num < menor) {
            menor = num;  o
        }
    }
    
    printf("O menor numero lido foi: %d\n", menor);
    printf("O maior numero lido foi: %d\n", maior);
    
    return 0;
}
