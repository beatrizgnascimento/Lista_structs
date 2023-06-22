#include <stdio.h>
#include <string.h>
typedef struct aluno{
    char nome[90];
    int matricula;
    char curso[90];
}aluno;

int main()
{
    int i;
    aluno vetaluno[5];
    
    for(i = 0; i < 5; i++)
    {
        scanf(" %[^\n]", vetaluno[i].nome);
        scanf("%d", &vetaluno[i].matricula);
        scanf(" %[^\n]", vetaluno[i].curso);
    }
    
   for(i = 0; i< 5; i++)
   {
    printf("Aluno %d:\nNome: %s\nMatricula: %d\nCurso: %s\n\n", i+1, vetaluno[i].nome, vetaluno[i].matricula, vetaluno[i].curso);

   }
    
    return 0;
}
