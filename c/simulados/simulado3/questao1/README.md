# Questão 1

1. (25 pontos) Escreva um programa em C que:
- Leia 10 números inteiros e os armazene em um vetor.
- Inverta a ordem dos elementos no vetor sem usar um segundo vetor.
- Exiba o vetor invertido na tela.

Entrada:
```bash
1 2 3 4 5 6 7 8 9 10
```
Saída:
```bash
10 9 8 7 6 5 4 3 2 1
```

```C
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
```