#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numero_inteiro = 10;
    float numero_quebrado = 10.4; // usa 4 bytes para armazenar
    double numero_quebrado_preciso = 10.10231023; //possui ate 15 digitos de precisão usa 8 bytes para armazenar
    char letra = 'a';
    char palavra[10] = "Bom dia";

    printf("Tipos de Dados:\n");
    printf("Numero inteiro: %d\n", numero_inteiro);
    printf("Numero quebrado: %f\n", numero_quebrado);
    printf("Numero quebrado: %.15g\n", numero_quebrado_preciso);
    printf("Letra: %c\n", letra);
    printf("Palavra: %s\n", palavra);


    // system("pause"); apenas para windows
    return 0;
}