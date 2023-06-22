#include <stdio.h>

typedef struct numero
{
    float r;
    float im;
}numero;

int main()
{
    numero num1;
    numero num2;
    
    
    scanf("%f %f", &num1.r, &num1.im);
    
    scanf("%f %f", &num2.r, &num2.im);
    
    float soma1 = num1.r + num2.r;
    float soma2 = num1.im + num2.im;
    float sub1= num1.r - num2.r;
    float sub2 = num1.im - num2.im;
    float prod1 = (num1.r * num2.im) + (num1.im * num2.r); 
    float prod2 = (num1.r * num2.r) + ((num1.im * num2.im) * -1);
    
    printf("Soma: %f + (%f)i\n", soma1, soma2);
    printf("Subtracao: %f + (%f)i\n", sub1, sub2);
    printf("Produto: %f + (%f)i", prod2, prod1);
    
    return 0;
}
