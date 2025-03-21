#include <stdio.h>

int main () {

    int x;

    printf("Digite o valor de X: \n");
    scanf("%d",&x);

    if(x%2!=1){
        printf("O número é par");
    }else {
        printf("O número é impar");
    }
}