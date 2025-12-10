/*
Escreva um programa que crie um vetor com 10 posições, leia um número inteiro fornecido pelo 
usuário e preencha o vetor com esse número e seus múltiplos. Por exemplo, caso o usuário digite o 
número 5, o vetor deverá ser preenchido com 5, 10, 15, 20...
*/

#include <stdio.h>

int main()
{
    int x;
    int vetor[10];
    
    printf("Digite o numero para preencher o vetor: ");
    scanf("%d", &x);
   
    for (int i=0; i<10; i++) {
        vetor[i] = x*(i+1);
    }

    printf("[");
    
    for (int i=0; i<10; i++) {
        (i == 0) ? printf("%d", vetor[i]) : printf(", %d", vetor[i]);
    }
    
    printf("]\n");
    
    return 0;
}