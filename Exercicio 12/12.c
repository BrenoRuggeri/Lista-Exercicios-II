#include <stdio.h>
#include <math.h>

int main () {

    int x, raiz, quadrado;

    printf("Digite o valor de X: \n");
    scanf("%d",&x);

    if(x>=0){
        
        quadrado = x * x;

        printf("O número %d ao qudrado é: %d\n",x,quadrado);
        
        raiz = sqrt(x);
        printf("A raiz quadrada de %d é: %d\n",x,raiz);
    
    }else{
        printf("O número é invalido\n");
    }
 
    
}