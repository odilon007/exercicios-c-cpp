/*
Escreva um programa que preencha dois vetores A e B (cada um com tamanho 50) com valores
reais fornecidos pelo usuário. Em seguida o programa deverá preencher automaticamente um vetor
denominado C com a soma dos elementos, em cada posição, de A com B.
*/

#include <stdio.h>

#define N 50

int main()
{
    int vetorA[N];
    int vetorB[N];
    int vetorC[N];
    
    for (int i=0; i<N; i++) {
        printf("Digite o valor do vetor A[%d]: ", i);
        scanf("%d", &vetorA[i]);
        
        printf("Digite o valor do vetor B[%d]: ", i);
        scanf("%d", &vetorB[i]);
        
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    printf("[");
    
    for (int i=0; i<N; i++) {
        (i == 0) ? printf("%d", vetorC[i]) : printf(", %d", vetorC[i]);
    }
    
    printf("]\n");
    
    return 0;
}