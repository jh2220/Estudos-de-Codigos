#include <stdio.h>

int main()
{
    int linha, coluna;
    int matriz[2][2];

    for(linha = 0; linha < 2; linha++)
    {
        for(coluna = 0; coluna < 2; coluna++)
        {
            printf("Digite os valores da matris para a linha %d, coluna %d: ", (linha + 1), (coluna + 1));
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("\n========================\n");

    for(linha = 0; linha < 2; linha++)
    {
        for(coluna = 0; coluna < 2; coluna++)
        {
            printf("[%d]", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}
