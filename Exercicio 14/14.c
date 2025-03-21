#include <stdio.h>

int main () {

    int x, y, diferenca;

    printf("Digite o valor de x: \n");
    scanf("%d",&x);

    printf("Digite o valor de y: \n");
    scanf("%d",&y);

    if(x>y){
        printf("O maior valor foi: %d\n",x);

        diferenca = x - y;
        printf("A diferença entre %d e %d é: %d\n",x,y,diferenca);


    }else{
        printf("O maior valor foi: %d\n",y);

        diferenca = y - x;
        printf("A diferença entre %d e %d é: %d\n",y,x,diferenca);
    }
    
}