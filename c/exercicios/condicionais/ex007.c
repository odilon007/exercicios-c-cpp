#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora1, hora2, duracao;

    printf("Digite a hora inicial: ");
    scanf("%d", &hora1);
    printf("Digite a hora final: ");
    scanf("%d", &hora2);

    if (hora2 > hora1) {
        duracao = hora2 - hora1;
    } else if (hora1 > hora2) {
        hora2 += 24;
        duracao = hora2 - hora1;
    } else {
        duracao = 24;
    }

    printf("a duracao eh igual a: %d horas", duracao);

    return 0;
}
