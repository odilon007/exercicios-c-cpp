#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero entre 1 e 12: ");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("jan");
            break;
        case 2:
            printf("fev");
            break;
        case 3:
            printf("mar");
            break;
        case 4:
            printf("abr");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("jun");
            break;
        case 7:
            printf("jul");
            break;
        case 8:
            printf("ago");
            break;
        case 9:
            printf("set");
            break;
        case 10:
            printf("out");
            break;
        case 11:
            printf("nov");
            break;
        case 12:
            printf("dez");
            break;
        default:
            printf("invalido");
    }

    return 0;
}
