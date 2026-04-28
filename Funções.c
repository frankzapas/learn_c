#include <stdio.h>
#include <stdlib.h>
//#include <string.h>



// tipo_de_retorno nome_da_função(parametros)
//{
//  corpo da função
//}


int multiplicar(int p1, int p2)
{
    return (p1 * p2);
}


int somar(int p1, int p2)
{
    int sum = p1 + p2;
    
    // recursividade
    return multiplicar(sum, sum);
}

int main(void)
{
    int p1, p2;
    printf("Digite um numero: ");
    scanf("%d", &p1);
    printf("Digite outro numero: ");
    scanf("%d", &p2);
    printf("%d", somar(p1, p2));
    return 0;
}