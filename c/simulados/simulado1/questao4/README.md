# Questão 1 (2,5 pontos) 

O comportamento de alguns processos industriais pode ser caracterizado a partir das raízes de
uma equação denominada equação característica. Em sistemas de segunda ordem, essa equação é da forma:
a*x2+b*x+c = 0. Em outras palavras, trata-se de uma equação de segundo grau. Para determinar a natureza
da reposta do sistema, é necessário calcular o delta dessa equação como segue:

Δ = b
2 − 4ac

Escreva um programa que leia os valores dos coeficientes a, b e c, calcule o Δ e indique a natureza do sistema
segundo a seguinte relação:

Valor de Δ Natureza do sistema
0 Sistema criticamente amortecido
Δ < 0 Sistema sub-amortecido
Δ > 0 Sistema sobre-amortecido
```c
#include <stdio.h>

int main()
{
    float a, b, c;
    
    printf("Digite os valores dos coeficientes a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);
    
    float delta = b*b-4*a*c;
    
    if (a == 0) {
        printf("O valor de 'a' deve ser diferente de zero.\n");
        return 0
    }
    
    if (delta == 0) {
        printf("Sistema criticamente amortecido\n");
    } else if (delta < 0) {
        printf("Sistema sub-amortecido\n");
    } else {
        printf("Sistema sobre-amortecido\n");
    }
    
    return 0;
}
```