#include<stdio.h>
#include<conio.h>
int main()
{
 int a[25][25],b[25][25],c[25][25],i,j,m,n;
 printf("\n Enter the rows and columns of two matrices:");
 scanf("%d %d",&m,&n);
 printf("\n Enter the elements of A matrix:");
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
 printf("\n Enter the elements of B matrix:");
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
     scanf("%d",&b[i][j]);
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
     c[i][j]=a[i][j]+b[i][j];
        printf("\n The addition of two matrices");
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
       printf("\t%d",c[i][j]);

}