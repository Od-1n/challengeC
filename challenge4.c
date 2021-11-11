#include <stdio.h>

int main (){

    float mile , metre , km;
   
        printf("please enter the distance in mile \n");
                    scanf (" %f " , &mile);

                    km = mile * 1.609;
                    metre = km * 1000;
                      printf("the distance in metre is : %f\n", metre);
                return 0;

}