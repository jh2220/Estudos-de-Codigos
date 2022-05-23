#include <stdio.h>

int main()
{
    //Definindo as variaveis
    char nome[30];
    char endereco[30];
    int idade;

    //Coletando os dados
    printf("Digite um nome\n");
    scanf("%s", &nome);
    printf("Digite um endereco\n");
    scanf("%s", &endereco);
    printf("Digite uma idade\n");
    scanf("%d", &idade);

    //Apresentacao dos dados
    printf("\n nome: %s", nome);
    printf("\n endereco: %s", endereco);
    printf("\n nome: %d", idade);

    return 0;
}
