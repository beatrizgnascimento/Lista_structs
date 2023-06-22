#include <stdio.h>
#include <math.h>

typedef struct polar
{
   float raio;
   float a;
}polar;

typedef struct cartesiano
{
    float x;
    float y;
}cartesiano;


int main()
{
    int i;
    polar vetpo[6];
    cartesiano vetco[6];
    
    for(i = 0; i < 6; i++)
    {
        scanf("%f", &vetpo[i].raio);
        scanf("%f", &vetpo[i].a);
    }
    
   
    for(i = 0; i < 6; i++)
    {
        float rad = vetpo[i].a * (acos(-1) / 180.0);
        vetco[i].x = vetpo[i].raio * cos(rad);
        vetco[i].y = vetpo[i].raio * sin(rad);
    }
    
    for(i = 0; i < 6; i++)
    {
        printf("(%.2f, %.2f)\n", vetco[i].x, vetco[i].y);
    }
    
    
    return 0;
}
