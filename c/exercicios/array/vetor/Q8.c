/*Escreva um programa que leia do usuário valores para preencher dois vetores A e B com 10 
elementos cada, intercale os elementos desses dois vetores formando assim um novo vetor C com 
20 elementos, em que nas posições ímpares de C serão armazenados os elementos de A e nas 
posições pares, os elementos de B. Por fim, o programa deverá mostrar o vetor C.
*/

#include<stdio.h>

#define N 10
#define M 20

int main()
{
    int a[N], b[N], c[M];
    
    printf("Digite os valores do vetor A: \n");
    
    for (int i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Digite os valores do vetor B: \n");
    
    for (int i =0; i<N; i++) {
        scanf("%d", &b[i]);
    }
    
    for (int i=0; i<M; i++) {
        if (i % 2 == 0) {
            c[i] = a[i/2];
        } else {
            c[i] = b[(i-1)/2];
        }    
    }
    printf("[");
    for (int i=0;i<M;i++) {
        (i == 0) ? printf("%d", c[i]) : printf(", %d", c[i]);
    }
    printf("]\n");
}