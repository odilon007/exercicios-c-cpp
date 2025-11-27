
#include <stdio.h>

/*
Um número é, por definição, primo se ele não tem divisores, exceto 1 e ele próprio. Escreva um
programa que leia um número e determine se ele é ou não primo.
*/

int main()
{
    int num, i=2, qtd=0;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("Nao eh primo");
        return 0;
    }
    
    
    while (i < num) {
        if (num % i ==0) {
            qtd++;
        }
        i++;
    }
    if (qtd == 0) {
        printf("Eh primo!");
    } else {
        printf("Nao eh primo");
    }
    
    return 0;
}