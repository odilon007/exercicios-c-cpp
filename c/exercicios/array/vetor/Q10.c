/*.. Escreva um programa que receba inicialmente 10 valores do usuário. Após armazenar estes 10 
valores, o programa deverá requisitar um novo número ao usuário e retornar quantas vezes este 
novo número foi encontrado no conjunto dos 10 valores inseridos inicialmente.*/

#include<stdio.h>

#define N 10

int main()
{
    int v[N], qtd=0, k;
    
    printf("Digite os valores do vetor: \n");
    
    for (int i=0; i<N; i++) {
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor que deseja ver a ocorrencia: \n");
    scanf("%d", &k);
    
    for (int i=0; i<N; i++) {
        if (v[i] == k) {
            qtd++;
        }
    }
    
    printf("O numero %d aparece %d vezes no vetor.\n", k, qtd);
    
}