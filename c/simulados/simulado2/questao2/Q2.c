#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra=' ', anterior, atual;
    int rep=0, total=0;
    do{
    anterior = letra;

    printf("---------------------------\n");
    printf("- 'I' = iniciar rotacao\n");
    printf("- 'P' = pausar\n");
    printf("- 'A' = ajustar velocidade\n");
    printf("- 'F' = finalizar\n");
    printf("---------------------------\n");
    printf("Digite o operador: ");
    scanf(" %c", &letra);

    total += 1;

    if (letra == 'F') {
        break;
    }
    atual = letra;
    if (atual == anterior) {
        rep+= 1;
    }

    }while(1);

    printf("O total de comandos foi igual a: %d\n", total);
    if (rep >0) {
        printf("houve comandos repetidos em sequência\n");
    } else {
        printf("nao houve comandos repetidos em sequência\n");
    }


    return 0;
}
