#include<stdio.h>
void main()
{
 int a,b,c,n;
 printf("\n\tArithmetic Operations");
 printf("\n MENU:");
 printf("\n1.Addition,\n2.Subtraction,\n 3.Multiplication,\n 4.Division.");
 printf("\nEnter first number:");
 scanf("%d",&a);
 printf("\nEnter second number:");
 scanf("%d",&b);
 printf("Choose the arithmetic operations:");
 scanf("%d",&n);
 switch(n)
 {
   case 1: c=a+b;
        printf("\nThe addition of two numbers %d\n",c);
        break;
   case 2: c=a-b;
        printf("\nThe subtraction of two numbers %d\n",c);
        break;
   case 3: c=a*b;
        printf("\nThe Multiplication of two numbers %d\n",c);
        break;
   case 4: c=a/b;
        printf("\nThe Division of two numbers %d\n",c);
        break;
   case 5: exit(0);
        break;
   default: printf("\nInvalid Operation code");
 }
 
}