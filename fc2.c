#include <stdio.h>
#include <stdlib.h>

void echanger()
{
    int a,b,c;

    printf("Enter the a: ");
    scanf("%d", &a);

    printf("Enter the b : ");
    scanf("%d", &b);

   c=a;
   a=b;
   b=c;

   printf("la valleur mtn de a est : %d \n" ,a);
   printf("la valleur mtn de b est : %d \n" ,b);

}

int main()
{
    echanger();
    return 0;
}
