#include <stdio.h>

int main()
{
    int i;

    printf("Digite um valor: ");
    scanf("%d", &i);

    for(i; i >= 1; i--)
    {
        printf("\n%d", i);
    }

    return 0;
}
