#include <stdio.h>

int main () {
       int age;
       unsigned int  num;
       char sexe[20];
       char  prenom[20];
       char  nom[20];

    printf("votre age est \n");
    scanf("%d",&age);
    
    printf("votre num est \n");
    scanf("%u",&num);

    
    printf("votre sexe est \n");
    scanf("%s",&sexe);

    
    printf("votre prenom est \n");
    scanf("%s",&prenom);

    
    printf("votre nom est \n");
    scanf("%s",&nom);

   printf(" votre age  : %d \n votre num est :%u \n votre sexe est : %s \n  votre prenom est :%s\n  votre nom est:%s \n ",age,num,sexe,prenom,nom);
return 0;

}
 