#include <stdio.h>

#define N 10

int main()
{
    int vetor[N];
    
    printf("Digite 10 valores para o vetor: ");
    for (int i=0; i<N; i++) {
        scanf("%d", &vetor[i]);
    }
    for (int i=0; i<N/2; i++) {
        int temp = vetor[N-i-1];
        vetor[N-i-1] = vetor[i];
        vetor[i] = temp;
    }
    for (int i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}