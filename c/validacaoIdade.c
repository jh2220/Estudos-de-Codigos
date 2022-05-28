#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 18){
        printf("\nSua idade eh de: %d", idade);
        printf("\nIsso significa que voce eh menor de idade");
    }else{
        printf("\nSua idade eh de: %d", idade);
        printf("\nIsso significa que voce eh mair de idade");
    }


    return 0;
}
