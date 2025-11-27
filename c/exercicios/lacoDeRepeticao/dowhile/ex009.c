#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que, para um número indeterminado de pessoas:
• leia a idade de cada pessoa, sendo que a leitura da idade 0 (zero) indica o fim da leitura e não
deve ser considerada;
• calcule e escreva o número de pessoas lidas;
• calcule e escreva a idade média do grupo;
• calcule e escreva a menor idade e a maior idade.
*/

int main()
{
    int idade, soma=0, qtdpessoas=0, menor, maior;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    while (1) {
        if (idade == 0) {
            break;
        }
        
        if (idade < 0) {
            printf("Idade invalida! Digite uma idade positiva.\n");
        }
        
        if (qtdpessoas == 0) {
            menor = idade;
            maior = idade;
        }
        
        soma += idade;
        qtdpessoas++;
        
        if (idade > maior) {
            maior = idade;
        }
        if (idade < menor) {
            menor = idade;
        }
        
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }
    
    if (qtdpessoas > 0) {
        float media = (float)soma/qtdpessoas;
        printf("A media eh igual a: %.2f\n", media);
        printf("O valor do maior eh igual a: %d\n", maior);
        printf("o valor do menor eh igual a: %d\n", menor);
    } else {
        printf("Nenhuma pessoa foi registrada.\n");
    }
    
    return 0;
}