#include <stdio.h>

int main()
{
    int i;

    do{
        printf("Digite um numero do sabor\n");
        printf("\t (1) ...Flocos\n");
        printf("\t (2) ...Morango\n");
        printf("\t (3) ...Leite Condesado\n");

        scanf("%d", &i);
    }while(i < 1 || i > 3);

    switch(i)
    {
        case 1:
            printf("\t\t Voce escolheu Flocos");
            break;
        case 2:
            printf("\t\t Voce escolheu Morango");
            break;
        case 3:
            printf("\t\t Voce escolheu Leite Condesado");
            break;
    }

    return 0;
}
