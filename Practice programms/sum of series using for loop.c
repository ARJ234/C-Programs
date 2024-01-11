#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0;
 printf("Enter the value for n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    sum=sum+i;
 printf("Sum=%d",sum);
 getch();
}