#include <stdio.h>
#include <stdlib.h>
int main()
{

char car;


    printf("enter your car:\n");
    scanf ("%s", &car);

switch (car)
{
  case 'a':
    printf("vowel");
    break;
  case 'o':
    printf("vowel");
    break;

  case 'e':
    printf("vowel");
    break;
  case 'u':
    printf("vowel");
    break;
  case 'i':
    printf("a vowel");
    break;

  default:
    printf("not a vowel");
}
 return 0;

}
