#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
    struct ficha_aluno {
        int idade;
        char nome[4];
        int turma;
    };


    struct ficha_aluno aluno;
    aluno.idade = 10;
    strcpy(aluno.nome, "Davi");
    aluno.turma = 0;

    printf("O aluno tem idade %d, seu nome é %s, e é da turma %d\n", aluno.idade, aluno.nome, aluno.turma);
    return 0;
}