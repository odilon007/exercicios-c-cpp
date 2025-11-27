#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("%d maior que zero", x);
    } else if (x<0) {
        printf("%d menor que zero", x);
    } else {
        printf("%d eh igual a zero", x);
    }

    return 0;
}