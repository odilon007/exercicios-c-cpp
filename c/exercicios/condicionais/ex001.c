#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);

    if (x > y) {
        printf("\n%d eh o maior\n", x);
    } else {
        printf("\n%d eh o maior\n", y);
    }

    return 0;
}