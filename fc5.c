#include <stdio.h>
#include <stdlib.h>

void add()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int sum = a + b;

    printf("The sum of %d and %d is: %d\n", a, b, sum);

    printf("-------------instruction-------------\n");
}

void sous()
{
 int c,d;
     printf("Enter the first number: ");
    scanf("%d", &c);

    printf("Enter the second number: ");
    scanf("%d", &d);

    int sous = c-d;

    printf("The sous of %d and %d is: %d\n", c, d, sous);
      printf("-------------instruction-------------\n");

}

void multi()
{
 int e,f;
     printf("Enter the first number: ");
    scanf("%d", &e);

    printf("Enter the second number: ");
    scanf("%d", &f);

    int multi = e*f;

    printf("The sous of %d and %d is: %d\n", e, f, multi);
      printf("-------------instruction-------------\n");

}


int main()
{
    add();
    sous();
    multi();
    return 0;
}


