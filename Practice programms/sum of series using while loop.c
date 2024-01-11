#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i=1,sum=0;

 printf("Enter the value for n =");
 scanf("%d",&n);
 while(i<=n)
 {
    sum=sum+i;
    i=i+1;
 }
 printf("Sum=%d",sum);
 
}