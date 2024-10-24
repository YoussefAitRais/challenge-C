#include <stdio.h>
#include <stdlib.h>


typedef struct person

 {
 char nom [];
 int age;
char  adresse adr  ;
 };

 typedef struct adresse

  {
  char rue [];
  char ville [];
  int codepostal;
  }

int main () {

struct person p1;

p1.nom = 'youssef';
p1.age = '24';
p1.adresse ={'Riad Esala','Benimellal',2300};


printf("personne: %d\n", p1.nom);








return 0;
}
