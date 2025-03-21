#include <stdio.h>
#include <math.h>

int main () {

    int x, raiz;

    printf("Digite o valor de X: \n");
    scanf("%d",&x);

    if(x>=0){
        raiz = sqrt(x);
        printf("A raiz quadrada de %d é: %d",x,raiz);
    }else{
        printf("O número é invalido\n");
    }
 
    
}