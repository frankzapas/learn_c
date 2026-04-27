#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, resto_i, soma_i, mul_i, sub_i;
    double div_i;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma_i = n1 + n2;
    mul_i = n1 * n2;
    sub_i = n1 - n2;
    resto_i = n1 % n2;
    div_i = n1 / n2;

    printf("\nA soma: %d\nA subtração: %d\nA divisão: %f\nA multiplicação: %d\nO resto é: %d\n", soma_i, sub_i, div_i, mul_i, resto_i);

    if(div_i > 0){
        printf("Este numero é divisivel por %d", n2);
    } else printf("Este numero não é divisivel por %d", n2);

    printf("\n");


    return 0;
}