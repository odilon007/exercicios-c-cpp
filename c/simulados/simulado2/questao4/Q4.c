#include <stdio.h>

int main()
{
    float metros, vm;
    int segundos;
    
    printf("Digite a distancia total (metros): ");
    scanf("%f", &metros);
    printf("Digite o tempo total: ");
    scanf("%d", &segundos);
    
    if (segundos >0) {
        vm = metros/segundos;
    } else {
        printf("Digite um valor positivo de segundos.\n");
        return 0;
    }
    float posicao;
    
    for (int i=0; i<=segundos; i++) {
        posicao = vm *i;
        printf("tempo: %ds -> posicao: %.1fm\n", i, posicao);
    }
    
    return 0;
}