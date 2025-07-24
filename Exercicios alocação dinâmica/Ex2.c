#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Crie um programa na linguagem C contendo uma estrutura das notas de um aluno numa disciplina. A
estrutura (struct) deve conter três notas e média. Ao final, mostre o tamanho em bytes essa estrutura
ocupa */

typedef struct aluno
{
    float n[3];
    float media;
} Aluno;

void 
mediaAluno(Aluno *a1){
    int i;
    
    for (i = 0; i < 3; i++)
    {
        a1->media += (a1->n[i]);
    }

    a1->media = a1->media/3;
    }

int main(){

    Aluno aluno1;

    int i;
    printf("Digite tres notas:\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%f", &aluno1.n[i]);
    }

    mediaAluno(&aluno1);

    printf("A media do aluno eh de: %.2f\n", aluno1.media);
    printf("Tamanho de bytes que esta estrutura utiliza: %d", sizeof(aluno1));








return 0;
}