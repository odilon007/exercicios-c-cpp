#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 3

int main()
{
    float matriz[M][N];
    float m1, m2, m3, m4, menor =0;
    int x;
    printf("Digite os valores das tensoes em cada corpo de prova:\n");
    for (int i=0; i<M; i++) {
        float soma =0;
        for (int j=0; j<N; j++) {
            scanf("%f", &matriz[i][j]);
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                x = i;
            }
            soma += matriz[i][j];
        }
        float menor;
        switch (i) {
            case 0:
                float m1 = soma/N;
                printf("Media do corpo de prova %d: %.2f\n", i+1, m1);
                break;
            case 1:
                float m2 = soma/N;
                printf("Media do corpo de prova %d: %.2f\n", i+1, m2);
                break;
            case 2:
                float m3 = soma/N;
                printf("Media do corpo de prova %d: %.2f\n", i+1, m3);
                break;
            case 3:
                float m4 = soma/N;
                printf("Media do corpo de prova %d: %.2f\n", i+1, m4);
                break;
        }
    }
    printf("A menor tensao foi no ensaio de indice: %d\n", x);
    return 0;
}
