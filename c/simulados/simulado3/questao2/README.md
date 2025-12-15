# Questão 2

2. (25 pontos) Implemente um programa em C que:
- Leia um vetor de 20 números inteiros.
- Leia um número inteiro X e verifique se ele está presente no vetor.
- Caso X esteja no vetor, exiba a(s) posição(ões) em que ele aparece. Caso contrário, informe que X
não foi encontrado.

Entrada:
```bash
3 5 8 10 15 3 7 8 10 5 2 6 8 9 12 15 18 10 3 5
10
```
Saída:
```bash
"O número 10 aparece nas posições: 4, 9, 18"
```

```C
#include <stdio.h>

#define N 20

int main()
{
    int vetor[N];
    int x;
    
    printf("Digite 20 valores para o vetor: ");
    for (int i=0; i<N; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);
    
    printf("O numero %d aparece nas posicoes:\n", x);
    int temp = 0;
    for (int i=0; i<N; i++) {
        if (vetor[i] == x) {
            if (temp == 0) {
                printf("%d", i+1);
                temp++;
            } else if (temp != 0) {
                printf(" ,%d", i+1);
            }
        }
    } printf("\n");
    
    return 0;
}
```