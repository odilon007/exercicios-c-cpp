#include <stdio.h>

int main()
{
    float salarioAtual, salarioNovo, aumento;
    
    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);
    
    if (salarioAtual <= 1000.00f && salarioAtual > 0) {
        aumento = 20;
    } else if (salarioAtual > 1000.00f && salarioAtual <= 5000.00f) {
        aumento = 10;
    } else if (salarioAtual > 5000.00f) {
        aumento = 0;
    } else {
        printf("salario invalido");
        return 0;
    }
    
    salarioNovo = salarioAtual * ((aumento+100)/100);
    
    printf("Aumento = %.2f%\nSalario atual = %.2f\n", aumento, salarioNovo);
    
    return 0;
}