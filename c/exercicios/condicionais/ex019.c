#include <stdio.h>

int main()
{
    int numApartamento, diarias;
    char tipo;
    float consumoInterno, valorTipo;
    
    printf("Digite o numero do apartamento: ");
    scanf("%d", &numApartamento);
    printf("Digite o tipo do apartamento utilizado: ");
    scanf(" %c", &tipo);
    
    if (tipo == 'A') {
        valorTipo = 150.00;
    } else if (tipo == 'B') {
        valorTipo = 100.00;
    } else if (tipo == 'C') {
        valorTipo = 75.00;
    } else if (tipo == 'D') {
        valorTipo = 50.00;
    } else {
        printf("Tipo invalido!");
        return 0;
    }
    
    printf("Digite o numero de diarias: ");
    scanf("%d", &diarias);
    printf("Digite o valor do consumo interno: ");
    scanf("%f", &consumoInterno);
    
    float valorTotalDiarias, subTotal, taxaser, total;
    
    valorTotalDiarias = diarias * valorTipo;
    subTotal = valorTotalDiarias + consumoInterno;
    taxaser = subTotal*0.1;
    total = subTotal + taxaser;
    
    printf("Numero do apartamento: %d\n", numApartamento);
    printf("Tipo do apartamento: %c\n", tipo);
    printf("Numero de diarias: %d\n", diarias);
    printf("Valor unitário da diária: %.2f\n", valorTipo);
    printf("Valor total das diarias: %.2f\n", valorTotalDiarias);
    printf("Valor do consumo interno: %.2f\n", consumoInterno);
    printf("Subtotal: %.2f\n", subTotal);
    printf("Valor da taxa de serviço: %.2f\n", taxaser);
    printf("Total: %.2f\n", total);
    
    return 0;
}