#include <stdio.h>
#include <stdlib.h>

#define N 12

int main()
{
    int vetor[N];

    printf("Digite os valores para o vetor:\n");
    for (int i=0; i<N; i++) {
        (i == N-1) ? scanf("%d", &vetor[0]) : scanf("%d", &vetor[i+1]);
    }
    for (int i=0; i<N; i++) {
        (i == 0) ? printf("%d", vetor[i]) : printf(" %d", vetor[i]);
    }


    return 0;
}
