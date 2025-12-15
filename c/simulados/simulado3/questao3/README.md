# Questão 3

3. (25 pontos) Em uma linha de produção industrial, 10 sensores de temperatura estão monitorando
diferentes partes de um equipamento. Os sensores retornam leituras em graus Celsius a cada minuto.
Escreva um programa em C que:
- Leia um vetor de 10 valores reais, representando as leituras de temperatura dos sensores.
- Determine e exiba a maior e a menor temperatura registrada.
- Caso alguma leitura seja maior que 80°C, exiba um alerta informando "ALERTA: Temperatura crítica detectada!".

Entrada:
```bash
35.2 42.1 78.5 81.0 39.7 45.6 50.3 79.9 83.2 37.5
```
Saída:
```bash
"Maior temperatura: 83.2°C"
"Menor temperatura: 35.2°C"
"ALERTA: Temperatura crítica detectada!"
```

```C
#include <stdio.h>

#define N 10

int main()
{
    float sensor[N];
    
    printf("Digite os valores das temperaturas: ");
    float maior, menor;
    int critico = 0;
    for (int i=0; i<N; i++) {
        scanf("%f", &sensor[i]);
        if (i == 0) {
            maior = sensor[0];
            menor = sensor[0];
        }
        if (sensor[i] > maior) {
            maior = sensor[i];
        }
        if (sensor[i] < menor) {
            menor = sensor[i];
        }
        if (sensor[i] > 80) {
            critico++;
        }
    }
    printf("Maior temperatura: %.1f°C\n", maior);
    printf("Menor temperatura: %.1f°C\n", menor);
    if (critico) {
        printf("ALERTA: Temperatura crítica detectada!\n");
    }
    
    return 0;
}