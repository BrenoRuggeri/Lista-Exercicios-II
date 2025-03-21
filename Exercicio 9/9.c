#include <stdio.h>

int main () {

    double valorTotal,valorTotalDesconto, valorDesconto1, comissao1, valorParcelado, comissao2;

    printf("Qual o valor total da compra ? \n");
    scanf("%lf",&valorTotal);

    //Total a pagar com 10% de desconto

    valorDesconto1 = 0.1;
    valorTotalDesconto = valorTotal * valorDesconto1;
    valorTotalDesconto = valorTotal - valorTotalDesconto;

    printf("O total a pagar com 10 por cento de desconto: %lf reais\n",valorTotalDesconto);

    //O valor de cada parcela, no parcelamento de 3x sem juros

    valorParcelado = valorTotal/3;
    printf("O valor de cada parcela: %lf\n",valorParcelado);

    //A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
    
    comissao1 = valorTotalDesconto * 0.05;
    printf("A comissão do vendedor em vendas a vista é: %lf reais\n",comissao1);

    //A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

    comissao2 = valorTotal * 0.05;
    printf("A comissão do vendedor em vendas parceladas é: %lf reais\n",comissao2);
    
}