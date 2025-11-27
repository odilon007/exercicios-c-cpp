#include <stdio.h>
#include <math.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite as notas da primeira etapa: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media = round((nota1+nota2+nota3)/3*10)/10;
    printf("%.1f", media);

    if (media < 7) {
        printf(" Nao passou na primeira etapa\n");
        return 0;
        
    } else {
        float nota4;
        printf(" Passou na primeira etapa!\n");
        printf("Digite a nota da segunda etapa: ");
        scanf("%f", &nota4);
        if (nota4 < 8) {
            printf("Nao aprovado\n");
        } else {
            printf("Aprovado!\n");
        }
    }
    return 0;
}