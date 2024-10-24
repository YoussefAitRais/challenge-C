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
}

int main()
{
    add();
    return 0;
}
