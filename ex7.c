#include <stdio.h>
#include <string.h>

typedef struct livro{
    char titulo[40];
    char autor[40];
    int ano;
}livro;

int main()
{
    int i = 0;
    livro vetlivro[8];
    char pesquisa[40];
    
    for(i = 0; i < 8; i++)
    {
        scanf(" %[^\n]", vetlivro[i].titulo);
        scanf(" %[^\n]", vetlivro[i].autor);
        scanf("%d", &vetlivro[i].ano);
    }
    
    
    while(1)
    {
        scanf(" %[^\n]", pesquisa);
        
        if(strcmp(pesquisa, "sair") == 0)
        {
            break;
        }
        
        printf("Livros de %s:\n", pesquisa);
            for(i = 0; i < 8; i++)
            {
                if(strcmp(vetlivro[i].autor, pesquisa) == 0)
                {
                    printf("%s (%d)\n", vetlivro[i].titulo, vetlivro[i].ano);
                    
                }
             } 
        printf("\n");
    }
    
    return 0;
}
