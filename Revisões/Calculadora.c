#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int  opc, resto;
    double n1, n2, mul, div, som, sub;
    printf("Digite um valor: ");
    scanf("%lf", &n1);
    printf("\nDigite outro valor: ");
    scanf("%lf", &n2);
    printf("Digite qual das opções você deseja: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 0:
        som = n1 + n2;
        printf("A soma é: %lf\n", som);
        break;
    
    case 1:
        div = n1 / n2;
        printf("A divisão é: %lf\n", div);
        
        break;
    case 2:
        sub = n1 - n2;
        printf("A subtração é: %lf\n", sub);
        break;
    case 3:
        mul = n1 * n2;
        printf("A multiplicação é: %lf\n", mul);
        break;
    default:
        break;
    }
    resto = (int)n1 % (int)n2;
    resto > 0?printf("Esse valor não divide o outro"):printf("Esse valor divide o outro");
    
    return 0;
}