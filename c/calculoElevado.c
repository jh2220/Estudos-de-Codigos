#include <stdio.h>

int main()
{
    int expoente, valor, valor_inicial, i;

    printf("Calculando expoente.");
    printf("\nDigite o valor numerico: ");
    scanf("%d", &valor);

    printf("Digite o valor do expoente: ");
    scanf("%d", &expoente);

    i = 1;
    valor_inicial = valor;

    while(i < expoente){

        valor *= valor_inicial;

        //Debug
        //printf("loop %d | %d\n", i, valor);

        i++;
    }

    printf("O resultado dos calculos eh de: %d", valor);

    return 0;
}
