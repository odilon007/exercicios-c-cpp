/*
screva um programa que preencha um vetor V1 com 50 elementos reais, fornecidos pelo usuário. 
Em seguida, o programa deverá preencher automaticamente um vetor V2 com os elementos de V1 
na ordem inversa das posições, ou seja, o último elemento de V1 será o primeiro de V2 e assim por 
diante. Por fim, o programa deverá exibir o vetor V2.
*/

#include <stdio.h>

#define N 50

int main()
{
    float v1[N];
    float v2[N];
    float x;
    
    printf("Digite os valores do vetor V1: \n");    
    for (int i=0; i<N; i++) {
        scanf("%f", &v1[i]);
    }
    for (int i=0; i<N; i++) {
        v2[i] = v1[N-i-1];
    }

    printf("[");
    
    for (int i=0; i<N; i++) {
        (i == 0) ? printf("%.2f", v2[i]) : printf(", %.2f", v2[i]);
    }
    
    printf("]\n");
    
    return 0;
}