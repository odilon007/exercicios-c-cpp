#include <stdio.h>

/* Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

int main() {
    
    int num, soma=0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    for (int i=1; i<num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    
    printf("A soma dos divisores eh igual a: %d", soma);

    return 0;
}
