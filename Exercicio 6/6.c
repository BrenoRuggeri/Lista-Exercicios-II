#include <stdio.h>

int main () {

   double real, dolar, moeda;

   printf("Quantos reais você deseja converter em dolares ? \n");
   scanf("%lf",&real);

   dolar = real / 5.70;

   printf("A conversão de %lf reais para dolar é %lf dolares",real, dolar);
    

    return 0;
}