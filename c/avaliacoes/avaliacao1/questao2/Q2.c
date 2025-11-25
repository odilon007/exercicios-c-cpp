#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diametro;

    printf("Digite o valor do diametro: ");
    scanf("%f", &diametro);
    if (diametro < 49.5) {
        printf("Peca fora do padrao  pequena demais.\n");
    } else if (diametro <= 50.5) {
        printf("Peca dentro do padrao.\n");
    } else if (diametro <= 51.5){
        printf("Peca levemente grande  toler�ncia aceita.\n");
    } else {
        printf("Peca rejeitada  grande demais.\n");
    }
    return 0;
}
