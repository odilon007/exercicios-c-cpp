#include <stdio.h>

/*
Faça um programa que leia a idade de várias pessoas até ser informada a idade igual a -99. Após ler as
idades, o programa deve exibir:
• Total de pessoas com menos de 21 anos;
• Total de pessoas com mais de 50 anos.
*/

int main()
{
    int idade, menor21=0, maior50=0;
    
    while (1) {
        printf("Digite o valor da idade: ");
        scanf("%d", &idade);
        
        if (idade == -99) {
            break;
        }
        if (idade < 21 && idade > 0) {
            menor21 += 1;
        }
        if (idade > 50 && idade < 200) {
            maior50 += 1;
        }
    }
    
    printf("Total de pessoas com menos de 21 anos: %d\n", menor21);
    printf("Total de pessoas com mais de 50 anos: %d\namespace", maior50);
    
    return 0;
}