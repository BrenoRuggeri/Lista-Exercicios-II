#include <stdio.h>

int main () {

    double numero, quadrado;

    printf("Digite um número real: \n");
    scanf("%lf",&numero);

    quadrado = numero*numero;

    printf("O valor do número digitado ao quadrado é: %lf\n",quadrado);
    

    return 0;
}