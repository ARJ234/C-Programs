#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,n,c=0;
    printf ("Enter the string:");
    gets(s);
    n=strlen(s);
    for(i=0; i<n/2; i++)
        if (s[i]==s[n-i-1])
            c++;
    if (c==1)
        printf("String is Palindrome");
    else
        printf("String is not Palindrome");
}