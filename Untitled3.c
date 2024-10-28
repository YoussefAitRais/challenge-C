#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct adresse {
    char rue[100];
    char ville[100];
    int codepostal;
} Adresse;

typedef struct person {
    char name[50];
    int age;
    Adresse local1;
} Person;

int main () {

Person p1;

//scanf("%s",&p1.name);

p1.age = 24;
strcpy (p1.local1.rue,'riad');
strcpy (p1.local1.ville,'benimellal');
p1.local1.codepostal = 23000;


  printf(" afficher %d", p1.age);


return 0;
}
