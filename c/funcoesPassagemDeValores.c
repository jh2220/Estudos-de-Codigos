#include <stdio.h>

void inserir(int alpha[])
{
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &alpha[i]);
    }
}

void imprimir(int beta[])
{
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nNumeros: [%d] = %d ", i, (2 * beta[i]));
    }
}

int main()
{
    int numero[3];
    printf("Preenchendo o vetor\n");
    inserir(numero);
    imprimir(numero);

    return 0;
}
