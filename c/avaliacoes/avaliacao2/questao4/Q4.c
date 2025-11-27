#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite o numero escolhido: ");
    scanf("%d", &num);
    printf("\n");
    for (int i=1; i<=100; i++) {
        if (i%num == 0) {
            printf("piu ");
        } else if (i%10 == num) {
            printf("piu ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;

}
