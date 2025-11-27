#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Digite 3 lados de um triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a<b+c && b<a+c && c<a+b) {
        if (a==b && b==c) {
            printf("triangulo equilatero");
        } else if (a==b || a==b || b==c) {
            printf("triangulo isoceles");
        } else {
            printf("triangulo escaleno");
        }
    } else {
      printf("nao forma um triangulo");
    }

    return 0;
}