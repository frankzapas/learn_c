#include <stdio.h>
#include <stdlib.h>


#define a 10;

int main(void)
{

    // Um array é uma coleção de elementos

    // Vetor é um array com uma dimenção
    char pass[5] = {'a', 'b', 'c', 'd', 'e'};
    // Matriz é um array com mais de uma dimenção 
    int idade_p[3][3];
    int f, j;
    idade_p[0][0] = 1;
    idade_p[0][1] = 2;
    idade_p[0][2] = 3;

    idade_p[1][0] = 4;
    idade_p[1][1] = 5;
    idade_p[1][2] = 6;


    idade_p[2][0] = 7;
    idade_p[2][1] = 8;
    idade_p[2][2] = 9;



    

    printf("Leitura do Vetor unidimensional: \n");
    for(int i=0;i<5;i++)
    {
        printf("%c", pass[i]);
    }


    printf("\nLeitura da Matriz bidimensional: \n");
    f=0;
    while(f < 3)
    {
        printf("Posição: %d\n", f);
        j=0;
        while(j < 3)
        {
            printf("- Elemento: %d\n", idade_p[f][j]);
            j++;
        }
        
        j=0;
        f++;
    }
    return 0;
}