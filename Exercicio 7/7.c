#include <stdio.h>

int main () {

    int x, sucessor, antecessor;

    printf("Digite um número: \n");
    scanf("%d",&x);

    sucessor = x + 1;
    antecessor = x - 1;

    printf("O antecessor de %d é: %d\n ",x,antecessor);
    printf("O sucessor de %d é: %d\n",x,sucessor);
    

    return 0;
}