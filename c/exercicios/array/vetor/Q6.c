/*
screva um programa em C que inicialmente pergunte ao usuário quantos números inteiros ele 
deseja digitar. Em seguida, o programa deve solicitar que o usuário digite cada um dos números. 
Após ler todos os números, informe quantos números são positivos, quantos são negativos, quantos 
são pares e quanto são ímpares.
*/

#include <stdio.h>


int main()
{
    int n;
    // {positivos, negativos, pares, impares}
    int situ[4] = {};
    
    printf("Digite quantos numeros voce quer digitar: ");
    scanf("%d", &n);
    
    int nums[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] == 0) {
            continue;
        } 
        (nums[i] > 0) ? situ[0]++ : situ[1]++;
        (nums[i] % 2 == 0) ? situ[2]++ : situ[3]++;
    }
    
    printf("total de numeros positivos: %d\n", situ[0]);
    printf("total de numeros negativos: %d\n", situ[1]);
    printf("total de numeros pares: %d\n", situ[2]);
    printf("total de numeros impares: %d\n", situ[3]);
    
    
    return 0;
}