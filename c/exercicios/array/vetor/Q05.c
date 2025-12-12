/*
screva um programa que armazene as notas de 40 alunos de uma turma. Calcule a média da turma 
e mostre a quantidade de alunos com notas acima da média, igual a média e abaixo da média. 
*/

#include <stdio.h>
#include <math.h>

#define N 40

int main()
{
    float notas[N];
    int situ[3] = {};
    float soma=0.0, media;
    
    printf("Digite os valores das notas: \n");    
    for (int i=0; i<N; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/N;
    media = round(media*100.0) / 100.0;
    
    for (int i=0; i<N; i++) {
        if (notas[i] == media) {
            situ[1]++;
        } else if (notas[i] < media) {
            situ[0]++;
        } else {
            situ[2]++;
        }
    }
    
    printf("Alunos com nota abaixo da media: %d\n", situ[0]);
    printf("Alunos com nota igual da media: %d\n", situ[1]);
    printf("Alunos com nota acima da media: %d\n", situ[2]);
    
    return 0;
}