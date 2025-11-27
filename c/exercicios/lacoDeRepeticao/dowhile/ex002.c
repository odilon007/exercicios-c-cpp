#include <stdio.h>

/*
Faça um programa que leia diversos números inteiros até ser informado o número 0 (zero). Ao final, o
programa deve mostrar a média aritmética de todos os números lidos (excluindo o zero).
*/

int main()
{
    int qtd=0, soma=0, num;
    
    
    while (1) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        
        soma += num;
        qtd++;
    }
    if (qtd > 0) {
        float media = (float)soma/qtd;
        printf("a media eh igual: %.2f", media);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    }
    
    return 0;
}