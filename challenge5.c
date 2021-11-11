#include <stdio.h>

int main (){

float tempc , tempf;
     printf("entrer la temperature en f");
        scanf("%f",&tempf);
            printf("la temperature en c est %.f",(tempf-32)/1.8);

            if(tempc>=0 && tempc<15)
        printf("froid");
    else if(tempc<0)
        printf("tres froid");
    else if(tempc<30 && tempc>=15)
        printf("chaud");
    else
        printf("tres chaud");

return 0;
}