#include <stdio.h>
#include <stdlib.h>

typedef struct person {

char name[50];
int age;
struct adresse local1;
};

struct adresse

  {
  char rue [100];
  char ville [100];
  int codepostal;
  };

int main () {

person p1;

p1.nom = 'youssef';
p1.age =24;
p1.local1.rue = 'riad';
p1.local1.ville = 'beni mellal';
p1.local1.codepostal = 23000;







return 0;
}
