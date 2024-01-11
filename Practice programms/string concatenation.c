#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[20],s1[20];
    clrscr();
    printf("Enter the string 1:\n");
    scanf("%s",&s);
    printf("Enter the string 2:\n");
    scanf("%s",&s1);
    strcat(s, s1);
    printf("The concatenated string is %s\n",s);
    getch();
}