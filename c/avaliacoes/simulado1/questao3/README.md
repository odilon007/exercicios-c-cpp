# Questão 3 (2,5 pontos)

Fazer um programa que leia um símbolo de operação do usuário (+, -, / ou *) e dois números
reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.
```c
#include <stdio.h>

int main()
{
    char op;
    float num1, num2;
    
    printf("Digite o operador e os dois numeros: ");
    scanf(" %c%f%f", &op, &num1, &num2);
    
    switch (op) {
        case '+':
            printf("%.1f + %.1f = %.1f", num1, num2, num1+num2);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f", num1, num2, num1-num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f", num1, num2, num1*num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.1f / %.1f = %.2f", num1, num2, num1/num2);
                break;
            } else {
                printf("Nao foi possivel realizar a divisao.\n");
                break;
            }
    }
    
    return 0;
}
```