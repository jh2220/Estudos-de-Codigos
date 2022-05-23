#include <stdio.h>

int main()
{
    //Definindo as variaveis
    float nota1;
    float nota2;
    float media;

    //Coletando os dados
    printf("Insira nota 1: ");
    scanf("%f", &nota1);
    printf("Insira nota 2: ");
    scanf("%f", &nota2);

    //Realizando calculos da media
    media = (nota1 + nota2) / 2;

    //Apresentacao dos dados
    printf("A media do aluno eh: %f", media);

    return 0;
}