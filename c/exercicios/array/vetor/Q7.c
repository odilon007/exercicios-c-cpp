/*
Escreva um programa que deverá ler e armazenar em um vetor A os seis números do último sorteio 
da Mega-Sena. Em seguida, o programa deverá ler e armazenar em um vetor B os 10 números 
correspondente a uma aposta. Por fim, o programa deverá exibir quantos números o apostador 
acertou
*/

#include <stdio.h>

#define N 6
#define M 10

int main()
{
    int vetorA[N];
    int vetorB[M];
    int acertos=0;
    
    printf("Digite os valores do ultimo sorteio: \n");
    
    for (int i=0; i<N; i++) {
        scanf("%d", &vetorA[i]);
    }
    
    printf("Digite os numeros da aposta: \n");
    
    for (int i=0; i<M; i++) {
        scanf("%d", &vetorB[i]);
    }
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (vetorB[i] == vetorA[j]) {
                acertos++;
                break;
            }
        }
    }
    
    printf("Total de acertos: %d", acertos);
    
    
    return 0;
}