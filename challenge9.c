#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    float x1;
    float y;
    float y1;
    float dst;
    printf("entrer la valeur de x:");
    scanf("%f",&x);
    printf("entrer la valeur de x1:");
    scanf("%f",&x1);
    printf("entrer la valeur de y:");
    scanf("%f",&y);
    printf("entrer la valeur de y1:");
    scanf("%f",&y1);
    dst = sqrt(pow(x1-x,2) + pow(y1-y,2));
    printf("Distance : %.f",dst);
    
}