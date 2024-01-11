#include<stdio.h>
void main()
{
    int num;
    printf("Enter the integer value:");
    scanf("%d",&num);
    if(num>=0)
        printf("%d is a positive number",num);
    if(num<0)
        printf("%d is a negative number",num);
}
