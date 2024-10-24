#include <stdio.h>
#include <stdlib.h>

int main ()
{

//typeV nomTable [] ;

int age [5];
int i;

for (i=0 ; i<5 ; i++){

printf("Afficher un tableau : ");
scanf("%d" ,&age[i]);}


printf("-------Tableau inverse-------- \n");



for (i=4 ; i>=0 ; i--){

printf(" Afficher un tableau inverse : %d\n" , i, age[i]); }

return 0;
}
