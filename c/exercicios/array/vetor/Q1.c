/*
Escreva um programa que leia um número fornecido pelo usuário e preencha um vetor de 10
posições com esse número;
*/

#include <stdio.h>

int main()
{
    int x;
    int vetor[10];
    
    printf("Digite o numero para preencher o vetor: ");
    scanf("%d", &x);
   
    for (int i=0; i<10; i++) {
        vetor[i] = x;
    }

    printf("[");
    
    for (int i=0; i<10; i++) {
        (i == 0) ? printf("%d", vetor[i]) : printf(", %d", vetor[i]);
    }
    
    printf("]\n");
    
    return 0;
}