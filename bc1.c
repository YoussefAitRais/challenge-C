#include <stdio.h>
#include <stdlib.h>

int main ()

{
   int nbr , i;

   printf("ecrire un nombre : \n" );
   scanf("%d" , &nbr);

   //for (i = 0; i < 5; i++)
   for (i= 1; i < 11; i++)
   {
       printf("%d * %d = *%d \n" , nbr, i, nbr*i);
   }





      return 0;
}



