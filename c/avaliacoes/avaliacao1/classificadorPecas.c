#include <stdio.h>
#include <stdlib.h>

/*Questão 2 – Classificador de peças
Em uma linha de produção mecânica, um sensor mede o diâmetro (em milímetros) de cada
peça produzida. O objetivo é classificar as peças com base no diâmetro, usando if-else
aninhado:
- Menor que 49,5: “Peça fora do padrão – pequena demais.”
- Entre 49,5 e 50,5: “Peça dentro do padrão.”
- Entre 50,6 e 51,5: “Peça levemente grande – tolerância aceita.”
- Maior que 51,5: “Peça rejeitada – grande demais.”
Faça um programa que leia o diâmetro e imprima a classificação.
*/

int main()
{
    float diametro;

    printf("Digite o valor do diametro: ");
    scanf("%f", &diametro);
    if (diametro < 49.5) {
        printf("Peca fora do padrao  pequena demais.\n");
    } else if (diametro <= 50.5) {
        printf("Peca dentro do padrao.\n");
    } else if (diametro <= 51.5){
        printf("Peca levemente grande  tolerância aceita.\n");
    } else {
        printf("Peca rejeitada  grande demais.\n");
    }
    return 0;
}
