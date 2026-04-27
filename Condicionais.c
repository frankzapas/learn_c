#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int opcao, div;
    float n1, n2, res;
    
    printf("Escolha uma opção:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4- Divisão\n");
    scanf("%d", &opcao);
    printf("Informe um numero:\n");
    scanf("%f", &n1);
    printf("Informe outro numero:\n");
    scanf("%f", &n2);
    
    
    switch (opcao)
    {
    case 1:
        res = n1 + n2;
        printf("O resultado é: %f", res);
        break;
    
    case 2:        
        res = n1 - n2;
        printf("O resultado é: %f", res);
        break;
    
    case 3:    
        res = n1 * n2;
        printf("O resultado é: %f", res);
        break;

    case 4:    
        res = n1 / n2;
        printf("O resultado é: %f", res);
        break;
    
    
    default:
        printf("Nenhuma opção te atende, tente mais uma vez!\n");
        main();
        break;
    }
    // Conversão de dados (type) var
    //div = (int)n1 % (int)n2;
    div = (int)round(n1) % (int)round(n2);

    // Operador ternario
    div <= 0?printf("\nÉ divisivel pelo outro\n"):printf("\nNão é divisivel pelo outro\n");
    
    // (type)var, o (type) converte a variavel para o tipo desejado por ex: float a= 1.1, (int) a equivale a 1
    return 0;
}