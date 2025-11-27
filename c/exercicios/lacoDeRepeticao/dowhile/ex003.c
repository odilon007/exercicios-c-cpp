#include <stdio.h>

/*Escreva um programa que inicialmente pergunte ao usuário quantos números inteiros ele deseja digitar.
Em seguida, o programa deve solicitar que o usuário digite cada um dos números. Após ler todos os
números, informe o maior número lido. Por exemplo, se o usuário informou que deseja ler 6 números, e
digitou 55, 3, 1, 78, 5, 38. O programa deve informar que o maior número digitado foi 78.*/

int main()
{
    int num, maior, temp;
    
    printf("Digite a quantidade de numeros que serao lidos: ");
    scanf("%d", &num);
    
    printf("Digite o valor: ");
    scanf("%d", &maior);
    num--;
    
    while (num != 0) {
        printf("Digite o valor: ", num);
        scanf("%d", &temp);
        
        if (temp > maior) {
            maior = temp;
        }
        
        num--;
    } 
    
    printf("o maior numero lido foi: %d\n", maior);

    return 0;
}