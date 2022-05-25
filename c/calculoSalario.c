#include <stdio.h>

int main()
{
    float salario, inss, sal_liquido;

    printf("Digite seu salario bruto: ");
    scanf("%f", &salario);

    if(salario <= 1693.72)
    {
        inss = salario * 0.08;
    }
    else if (salario >= 1693.73 && salario <= 2822.90)
    {
        inss = salario * 0.09;
    }

    sal_liquido = (salario - inss) - ir;

    printf("\nDesconto Inss: %f", inss);
    printf("\nSalario liquido %2.f", sal_liquido);

    return 0;
}
