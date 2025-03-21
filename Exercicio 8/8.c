#include <stdio.h>

int main () {

    double salarioBase, bonus, salarioBonus, salarioFinal;

    printf("Digite o salário do funcionário: \n");
    scanf("%lf",&salarioBase);

    bonus = 0.05;
    salarioBonus = salarioBase * bonus;

    salarioFinal = salarioBase + salarioBonus;
    
    printf("O salario do funcionário com bonus: %2.lf",salarioFinal);
}