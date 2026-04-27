#include <stdio.h>
#include <stdlib.h>

int main(void){

    int valor1, valor2;
    int res;
    printf("Digite um valor para a soma:\n");
    scanf("%d", &valor1);
    printf("Digite outro valor para a soma:\n");
    scanf("%d", &valor2);
    res = valor1 + valor2;
    printf("O resultado é: %d\n", res);
    


    // scanf("texto e tipo de dado", endereço da variavel &variavel)
    // system("pause"); apenas para windows
    return 0;
}