#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isprime(int x)
{
    if ( x <=1) return false;

    for (int i=2 ; i<x ; i++){
        if (x % i==1) return false;}

        return true;

}

int main()
{
    int a;

    printf("ecrire un nombre :");
    scanf("%d" , &a);

    if (isprime(a))
        printf("%d nombre est premier : \n" ,a);
    else
        printf(" %d nombre ne pas prmeier. \n" , a);

    return 0;
}



