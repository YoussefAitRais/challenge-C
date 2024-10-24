
#include <stdio.h>
#include <stdlib.h>

int main()
{

    double f,c;
    printf("Afiicher la temperature de f: \n");
    scanf( "%lf", &f);

     c = (f-32)/1.8;

    printf("la temperature de c est: %f"  , c);


    if ( 0 - 15) {
             printf ( "la temperature tres froid \n");}

        else if ( 15 - 30)
        {
             printf ( "la temperature froid \n");
        }

        else if ( 30 - 50 )
        {
             printf ( "la temperature chaud \n");
        }
        else if (50 - 80)

             printf ( "la temperature tres chaud \n");

    return 0;
}

