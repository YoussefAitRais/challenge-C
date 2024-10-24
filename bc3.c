#include <stdio.h>
#include <stdlib.h>

int main (){
int i,nbr,p;

printf( "Donner moi un nombre : \n");
scanf("%d" , &nbr);

p=1;


for(i=2 ; i<=2; i++){


    if ( nbr %2==1 ){
        p=0;
        break;
        }
}
    if(p==0) {
        printf("Nombre premier \n");}
    else{
        printf("nombre nopremier \n");}

}
