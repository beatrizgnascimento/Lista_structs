#include <stdio.h>
#include <string.h>

typedef struct aluno{
    int matricula;
    char nome[90];
    float p1, p2, p3;
}aluno;

int main()
{
    int i;
    float media;
    aluno vetaluno[5];
    float maior_p1 = 0;
    float maior_media = 0;
    int indice_maior_p1 = 0;
    int indice_maior_media = 0;
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &vetaluno[i].matricula);
        scanf(" %[^\n]", vetaluno[i].nome);
        scanf(" %f", &vetaluno[i].p1);
        scanf(" %f", &vetaluno[i].p2);
        scanf(" %f", &vetaluno[i].p3);
    }
    
    for(i = 0; i < 5; i++)
    {
        if(vetaluno[i].p1 > maior_p1)
        {
            maior_p1 = vetaluno[i].p1;
            indice_maior_p1 = i;
        }
        media = (vetaluno[i].p1 + vetaluno[i].p2 + vetaluno[i].p3) / 3;
        if(media > maior_media)
        {
            maior_media = media;
            indice_maior_media = i;
        }

    }
    
    printf("Maior nota na P1: %.2f\n%s\n\n", maior_p1, vetaluno[indice_maior_p1].nome);
    printf("Maior media: %s\nValor: %.2f\n\n", vetaluno[indice_maior_media].nome, maior_media);
    
    for(i = 0; i < 5; i++)
    {
     media = (vetaluno[i].p1 + vetaluno[i].p2 + vetaluno[i].p3) / 3;

       if(media>= 6)
    {
        printf("%d %s Aprovado\n", vetaluno[i].matricula, vetaluno[i].nome);
    }  
    else
    {
        printf("%d %s Reprovado\n", vetaluno[i].matricula, vetaluno[i].nome);
    }
    }


    
    return 0;
}
