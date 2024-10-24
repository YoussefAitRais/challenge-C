#include <stdio.h>
#include <stdlib.h>

int addition(int a , int b)
{
    return a+b;
}

int soustraction (int a , int b)
{

return a-b;
}

int multiplication (int a , int b)
{

return a*b;

}

float division (int a , int b)
{

    if (b==0)
    {
      printf("error");
      return 0;
    }
return a/b;
}


int main()

{
    int num1 , num2;
    char oper;

    printf("Entrer le numero: ");
    scanf(" %d", &num1);

    printf("Entrer le numero: ");
    scanf(" %d", &num2);

    printf("Choose the operation (+ - * /) : ");
    scanf(" %c", &oper);

    switch (oper)
    {
      case'+':
       printf(" %d + %d = %d ",num1,num2,addition(num1,num2));
       break;
    }

      switch (oper)
    {
      case'-':
       printf(" %d - %d = %d ",num1,num2,soustraction(num1,num2));
       break;
    }
      switch (oper)
    {
      case'*':
       printf(" %d * %d = %d",num1,num2,multiplication(num1,num2));
       break;
    }
      switch (oper)
    {
      case'/':
          if(num2 !=0)
    {
       printf(" %d / %d = %f \n",num1,num2,division(num1,num2));

    }else{
      printf("Erreur : Divisition par zero \n");
    }
       break;

       default:
      printf("error : operation invalid \n");
       break;

    }


    return 0;
}
