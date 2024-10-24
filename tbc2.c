#include <stdio.h>
#include <stdlib.h>

int main ()
{

//typeV nomTable [] ;

int nmbr [10];
int somme;
float moyenne;



for (int i=0 ; i<10 ; i++){

printf(" saisir nombre %d : " , i+1);
scanf("%d" ,&nmbr[i]);}

somme=0;

for (int i=0 ; i<10 ; i++)
    somme = somme + nmbr[i];

    printf("somme = %d \n" , somme);



   moyenne =(float) somme / 10;
        printf("moyenne = %.2f\n" , moyenne);


return 0;
}
