#include <stdio.h>

int main () {

    double nota1, nota2, media;

    printf("Qual foi sua primira nota ? \n");
    scanf("%lf",&nota1);

    printf("Qual foi sua segunda nota ? \n");
    scanf("%lf",&nota2);

    if(nota1 <= 10 && nota1 >= 0){
        
        if(nota2 <=10 && nota2 >= 0){
            
            media = (nota1 + nota2)/2;
            printf("A média foi: %lf\n",media);
        }
    }else{
        printf("Nota invalida !!");
    }

}