#include <stdio.h>

int main ()
{
    float metre,mile,kilometre;
         printf("entrer la distance en metre");
         scanf("%f",&metre);
                kilometre = metre / 1000;
                mile = kilometre/ 1.609;
    printf("la distance en mile est :%f",mile);
}
