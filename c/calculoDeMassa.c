#include <stdio.h>

float calcularMassa(float alpha, float beta)
{
    const float mA = 321.43;
    const float mB = 150.72;

    printf("\n 1,2 : 1,0 \t = %f", (1,2 * mA + 1 * mB));
    printf("\n 1,4 : 1,0 \t = %f", (1,4 * mA + 1 * mB));
    printf("\n 1,0 : 1,6 \t = %f", (1,0 * mA + 1,6 * mB));

    return (alpha * mA) + (beta * mB);
}

int main()
{
    float alpha = 0, beta = 0, result = 0;

    printf("Digite as amassas do elemento A e B: ");
    scanf("%f %f", &alpha, &beta);

    result = calcularMassa(alpha, beta);
    printf("\nResultado = %f", result);

    return 0;
}
