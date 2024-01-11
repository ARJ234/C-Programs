#include<stdio.h>
#include<string.h>
#define size 10
char bucket[size];
int tossed=0,eliminated;
void push();
char pop();
void show();
int isempty();
int isfull();
char infix[30],output[30];
int precedence(char);

int main()
{
    int a=0,b=0,c=0,len;
    char temporary;
    printf("\nEnter an infix expression:");
    scanf("%s",infix);
    printf("\nThe infix expresson is %s",infix);
    len=strlen(infix);
    for(a=0; a<len; a++)
    {
//Numbers are added to the output QUE
        if(infix[a]!='+' && infix[a]!='-' && infix[a]!='*' && infix[a]!='/' && infix[a]!='^' && infix[a]!=')' && infix[a]!='(' )
        {
            output[b++]=infix[a];
            printf("\nThe element added to Q is:%c",infix[a]);
        }
        else
        {
            if(tossed==0) //If there are no elements in the stack, the operator is added to it
            {
                push(infix[a]);
                printf("\nThe pushed element is:%c",infix[a]);
            }
            else
            {
              if(infix[a]!=')' && infix[a]!='(')
                {
                    if(precedence(infix[a]) <= precedence(infix[tossed-1]) )
                    {
                        temporary=pop();
                        printf("\n The poped element is :%c",temporary);
                        output[b++]=temporary;
                        push(infix[a]);
                        printf("\n The pushed element is :%c",infix[a]);
                        show();
                    }
                    else
                    {
                        push(infix[a]);
                        printf("\nThe pushed element is:%c",infix[a]);
                        show();
                    }
                }
                else
                {
                    if(infix[a]=='(')
                    {
                        push(infix[a]);
                        printf("\nThe pushed element is:%c",infix[a]);
                    }
                    if(infix[a]==')')
                    {
                        temporary=pop();
                        while(temporary!='(')

                        {
                            output[b++]=temporary;
                            printf("\nThe element added to Q is:%c",temporary);
//temp=pop();
                            printf("\n the poped element is :%c",temporary);
                            temporary=pop();
                        }
                    }
                }
            }
        }
        printf("\nthe postfix expression is: %s\n",output);
    }
    while(tossed!=0)
    {
        output[b++]=pop();
    }
    printf("the postfix expression is: %s\n",output);
}
void push(int eliminated)
{
    bucket[tossed]=eliminated;
    tossed++;
}
char pop()
{
    tossed--;
    return(bucket[tossed]);
}
void show()
{
    int x=tossed;
    printf("--The Stack elements are    ");
    while(x!=0)
       printf("%c, ",bucket[--x]);
}
//Function to get the precedence of an operator
int precedence(char symbol)
{
    if(symbol== '(') return 0;
    if(symbol== ')') return 0;
    if(symbol=='+' || symbol=='-') return 1;
    if(symbol=='*' || symbol=='/') return 2;
    if(symbol=='^') return 3;
    return 0;
}