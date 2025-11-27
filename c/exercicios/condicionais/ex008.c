#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    if (a % b == 0 || b % a == 0){
        printf("Os numeros sao multiplos");
    } else {
        printf("Os numeros nao sao multiplos");
    }

    return 0;
}
