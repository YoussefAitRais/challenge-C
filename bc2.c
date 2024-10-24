#include <stdio.h>
#include <stdlib.h>

int main (){
int i,j;
int c,p;

printf("Ecrire un nombre de colonne : ");
scanf("%d",&c);
p=1;

for (i=1;i<=(2*c-1);i++)
{
  for (j=1;j<=p;j++){
    printf("* ");
  }
  if(i<c)
    p++;
    else
    p--;

  printf("\n");
}
return 0;
}
