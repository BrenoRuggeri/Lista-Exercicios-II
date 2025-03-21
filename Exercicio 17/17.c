#include <stdio.h>

int main () {

    int salario, prestação;
    
    printf("Digite o valor do salário: ");
    scanf("%d", &salario);

    printf("Digite o valor da prestação: ");
    scanf("%d", &prestação);

    if (prestação > salario * 0.2) {
        printf("Empréstimo não concedido\n");
    } else {
        printf("Empréstimo concedido\n");
    }
    
}