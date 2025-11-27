#include <stdio.h>
#include <stdlib.h>

/*
O Índice de Massa Corporal (IMC) ajuda os especialistas a identificar quem está com os números da
balança muito acima ou muito aquém do que deveria. Escreva um programa, em C, para ler a altura e o
peso de 20 pessoas, calcular o IMC de cada uma e indicar o estado nutricional de acordo com a tabela.
*/

int main()
{
    // IMC = P/H*H
    int qtd = 20;
    float p, h, imc;
    
    while (qtd >0) {
        printf("digite o valor da altura: ");
        scanf("%f", &h);
        
        if (h <= 0) {
            printf("Altura invalida! A altura deve ser maior que 0.\n");
            continue;
        }
        
        printf("digite o valor do peso: ");
        scanf("%f", &p);
        
        if (p <= 0) {
            printf("Peso invalido! O peso deve ser maior que 0.\n");
            continue;
        }
        
        imc = p/(h*h);
        
        if (imc < 16) {
            printf("Estado Nutricional: DESNUTRICAO\n");
        } else if (imc <=18.4) {
            printf("Estado Nutricional: MAGREZA\n");
        } else if (imc <= 25) {
            printf("Estado Nutricional: NORMALIDADE\n");
        } else if (imc <= 29.9) {
            printf("Estado Nutricional: SOBREPESO\n");
        } else if (imc <= 39.9) {
            printf("Estado Nutricional: OBESIDADE\n");
        } else if (imc >= 40) {
            printf("Estado Nutricional: OBESIDADE MORBIDA\n");
        }
        
        qtd--;
    }
    
    return 0;
}