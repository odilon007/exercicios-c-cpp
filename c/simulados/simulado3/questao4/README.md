# Questão 4

4. (25 pontos) Suponha que em um baralho especial, os números permitidos para cada naipe sejam {0,1,2,3,4}
e que cada naipe está relacionado a um número, onde “ouro” relaciona-se ao valor 0, “copas” a 1, “paus” a 2,
e “espadas” a 3. Faça um programa que peça ao usuário para indicar dez pares (valor, naipe) e conte a
quantidade de vezes que cada uma das possíveis combinações de (valor, naipe) ocorreu, apresentando este
resultado ao usuário por meio de uma matriz em que as linhas representam os naipes e as colunas, os valores.
Por fim, indique que combinações de (valor, naipe) nunca ocorreram.

```C
#include <stdio.h>

#define NAIPE 4
#define VALOR 5

int main()
{
    int matriz[VALOR][NAIPE] = {};
    
    printf("Digite 10 pares (VALOR, NAIPE): ");
    
    int valor, naipe;
    
    for (int i=0; i<10; i++) {
        scanf("%d %d", &valor, &naipe);
        matriz[valor][naipe]++;
    }
    
    for (int i=0; i<VALOR; i++) {
        for (int j=0; j<NAIPE; j++) {
            printf("(%d,%d) ocorreu %d vezes\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}
```