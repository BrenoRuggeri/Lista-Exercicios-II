#include <stdio.h>

int main () {

    double nota1, nota2, nota3, media;

    printf("Digite sua primeira nota: \n");
    scanf("%lf",&nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%lf",&nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%lf",&nota3);

    media = (nota1+nota2+nota3)/3;

    printf("Sua média foi: %lf",media);
    
    

    return 0;
}