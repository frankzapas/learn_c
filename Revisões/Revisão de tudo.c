#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define a 10


int main(void)
{
    int n1, n2, contador, v_i, m_i, m_j;
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matriz[3][3];

    matriz[0][0] = 0;
    matriz[0][1] = 1;
    matriz[0][2] = 2;

    matriz[1][0] = 3;
    matriz[1][1] = 4;
    matriz[1][2] = 5;

    matriz[2][0] = 6;
    matriz[2][1] = 7;
    matriz[2][2] = 8;

    v_i = 0;
    printf("Lendo o vetor: \n");
    while (v_i < 10)
    {
        printf("%d", vetor[v_i]);
        v_i++;
    }

    m_i = 0;
    m_j = 0;
    printf("\nEscrevendo Matriz completa:\n");
    while (m_i<3)
    {
        while(m_j < 3)
        {
            printf("%d", matriz[m_i][m_j]);
            m_j++;
        }
        printf("\n");
        m_j=0;
        m_i++;
    }
    
    printf("A vale: %d", a);

    a < 11?printf("\nA e menor que 11\n"):printf("A é maior");
    

    return 0;
}