#include <stdio.h>

int main () {

    int x, y;

    printf("Digite o valor de x: \n");
    scanf("%d",&x);

    printf("Digite o valor de y: \n");
    scanf("%d",&y);

    if(x>y){
        printf("O maior valor foi: %d\n",x);
    }else{
        printf("O maior valor foi: %d\n",y);
    }
    
}