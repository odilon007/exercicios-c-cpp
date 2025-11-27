#include <stdio.h>
#include <math.h>

int main()
{
    float vv, sv;

    printf("Valor total de vendas: ");
    scanf("%f", &vv);
    sv = vv*0.05;

    if (sv > 937) {
        printf("salario do vendedor: %.2fR$", sv);
    } else {
        sv = 937.00f;
        printf("salario do vendedor: %.2fR$", sv);
        
    }
    
    return 0;
    
}