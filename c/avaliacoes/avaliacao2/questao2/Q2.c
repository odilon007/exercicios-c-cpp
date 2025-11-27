#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termo=1, sinal=1;
    float soma=0;

    for (int i=0; i<10000; i++) {
        soma += 1.0/termo;
        if (termo < 0) {
            termo -= 2;
        } else {
            termo += 2;
        }
        termo *= -1;
    }

    float pi = 4*soma;
    
    printf("o valor aproximado de pi: %f\n", pi);
    return 0;

}
