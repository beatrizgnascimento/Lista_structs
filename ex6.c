#include <stdio.h>

typedef struct carro
{
    char marca[40];
    float preco;
    int ano;
}carro;

int main()
{
    carro vetcarro[8];
    float p;
    int i;
    
    for(i = 0; i < 8; i++)
    {
        scanf(" %[^\n]", vetcarro[i].marca);
        scanf("%f", &vetcarro[i].preco);
        scanf("%d", &vetcarro[i].ano);
    }
    
    do
    {
        scanf("%f", &p);
         if (p > 0)
    {
        printf("Carros mais baratos que %.2f:\n", p);
        for (i = 0; i < 8; i++)
        {
            if (vetcarro[i].preco < p)
            {
                printf("%s %.2f %d\n", vetcarro[i].marca, vetcarro[i].preco, vetcarro[i].ano);
                
            }
            
        }
        printf("\n");
    }

   } while (p > 0);
    
    
    return 0;
}
