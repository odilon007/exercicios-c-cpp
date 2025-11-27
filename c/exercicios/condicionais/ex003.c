#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);
    if (x%2 == 0) {
        printf("eh par");
    } else {
        printf("eh impar");
    }

    return 0;
}