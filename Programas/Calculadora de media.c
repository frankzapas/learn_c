#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int qn;

    float ns = 0, na = 0, res = 0;
    printf("Quantas notas tomarão a media: ");
    scanf("%d", &qn);
    for (int i = 0; i < qn; i++)
    {
        printf("Digite o valor da nota %d:", i);
        scanf("%f", &na);
        ns += na;
    }

    res = ns/qn;

    printf("resultado da media é %f:", res);
    
    

    return 0;
}