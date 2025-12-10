/*. Escreva um programa que preencha um vetor com 10 elementos inteiros, fornecidos pelo usuário. 
Em seguida, o programa deverá exibir os elementos armazenados no vetor e permitir que o usuário 
selecione um desses elementos para ser removido. Quando isso ocorrer, o programa deverá 
remover o valor e, no momento da remoção, todos os elementos posteriores ao valor removido 
deverão ser reorganizados (movidos uma posição para esquerda) a fim de que o vetor resultante não 
fique com um espaço em branco entre elementos válidos. Por fim, o programa deverá mostrar o 
novo vetor, agora com 9 elementos, apenas.*/

#include<stdio.h>

#define N 10

int main()
{
    int v[10];
    int novov[9];
    int k;
    
    printf("Digite os valores do vetor: \n");
    
    for (int i=0; i<N; i++) {
        scanf("%d", &v[i]);
    }
    
    printf("Digite o indice que deseja remover: \n");
    scanf("%d", &k);
    
    int temp = 0;
    for (int i=0; i<N-1; i++) {
        if (k == i) {
            temp++;
        }
        novov[i] = v[temp];
        temp++;
    }
    
    printf("[");
    
    for (int i=0;i<N-1;i++) {
        (i == 0) ? printf("%d", novov[i]) : printf(", %d", novov[i]);
    }    
    printf("]\n");
}