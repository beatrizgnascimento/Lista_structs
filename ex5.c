#include <stdio.h>
#include <string.h>

typedef struct pessoa {
    char numero[30];
    char nome[60];
} pessoa;

int main() {
    pessoa vetpessoa[5];
    int i, j;
    pessoa temp; //var temp

    for (i = 0; i < 5; i++) 
    {
        scanf(" %[^\n]", vetpessoa[i].nome);
        scanf(" %[^\n]", vetpessoa[i].numero);
    }

    for (i = 0; i < 5; i++) 
    {
        for (j = i + 1; j < 4; j++) 
        {
            if (strcmp(vetpessoa[j].nome, vetpessoa[j + 1].nome) > 0) 
            {
                temp = vetpessoa[j];
                vetpessoa[j] = vetpessoa[j + 1];
                vetpessoa[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) 
    {
         printf("%s %s\n", vetpessoa[i].nome, vetpessoa[i].numero);
    }
     
    return 0;
}
