# Questão 2 (25 pontos) – Validação de Comandos Binários

O cálculo de constantes ou integrais em engenharia é feito frequentemente por somatórios
de séries (Método de Taylor/Leibniz). A constante p pode ser aproximada pela Série de
Leibniz:

π ≈ 4 × (1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)

Escreva um programa em C que utilize um laço for para calcular o valor aproximado de p
utilizando os primeiros 50 termos desta série.

Dica: Divida o raciocínio em partes. Primeiro, perceba que o denominador aumenta de 2 em
2 e crie a sequência 1, 3, 5, etc. Depois some as frações 1/i (em que i são os números dessa
sequência de 2 em 2). Alterne depois o sinal (positivo, negativo), o que pode ser feito
multiplicando uma variável de sinal por -1 a cada iteração. Por fim, multiplique o resultado
por 4.
### C99
```c
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
```