
#include <stdio.h>
#include <ctype.h>

/*
Faça um programa que leia uma lista de letras até ser informada a letra Z. Ao final, o programa deve
mostrar a quantidade lida de cada vogal.
*/

int main()
{
    char letra;
    int qtda=0, qtde=0, qtdi=0, qtdo=0,qtdu=0;
    
    while (1) {
        
        printf("digite uma letra: ");
        scanf(" %c", &letra);
        
        if (letra == 'Z') {
            break;
        } else {
            letra = tolower(letra);
            switch (letra) {
                case 'a':
                    qtda += 1;
                    break;
                case 'e':
                    qtde += 1;
                    break;
                case 'i':
                    qtdi += 1;
                    break;
                case 'o':
                    qtdo += 1;
                    break;
                case 'u':
                    qtdu += 1;
                    break;
                default:
                    break;
            }
        }
    }
    printf("letras a: %d\nletras e: %d\nletras i: %d\nletras o: %d\nletras u: %d\n", qtda, qtde, qtdi, qtdo, qtdu);

    return 0;
}