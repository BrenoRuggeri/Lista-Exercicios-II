#include <stdio.h>

int main () {

    int numero, numero2, numero3, soma;

    printf("Digite o primeiro número inteiro: \n");
    scanf("%d",&numero);

    printf("Digite o segundo número inteiro: \n");
    scanf("%d",&numero2);

    printf("Digite o terceiro número inteiro: \n");
    scanf("%d",&numero3);

    soma = numero + numero2 + numero3;

    printf("O resultado da soma é: %d",soma);

    return 0;
}

