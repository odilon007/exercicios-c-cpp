#include <stdio.h>

// Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.


int main() {
    int num, qtd=0;
    float soma=0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num);
        
        if (num >=0) {
            soma += num;
            qtd++;
        }
    }
    
    if (qtd >0) {
        float media = soma/qtd;
        printf("media igual a %.2f", media);
    } else {
        printf("nenhum numero positivo foi digitado.\n");
    }
    
    return 0;
}
