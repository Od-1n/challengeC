#include<stdio.h>

int main()

{
 int a,b,c,n ;

      printf("Enter the Number : ");
      scanf("%d",&n);
 
a = (n%100)%10;
b = (n%100)/10;
c = n/100 ;

printf("The reverse order is : %d%d%d", a,b,c);
return 0 ;

}
