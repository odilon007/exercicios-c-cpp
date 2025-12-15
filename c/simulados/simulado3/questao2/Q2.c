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