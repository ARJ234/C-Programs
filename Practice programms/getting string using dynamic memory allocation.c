#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    char *text;
    printf("Enter the limit of the text:");
    scanf("%d",&n);
    text = (char*)malloc((n)*sizeof(char));
    printf("Enter text including spaces space is also considered to be a valid character:");
    scanf(" ");//clear input buffer
    for (i=0;i<n;i++){
        scanf(" ");
        

       // gets(text+i);
    }
    gets(text);
   
    text[n]='\0';
    
    i=0;
    printf("Inputted text according to limit is :");
    while(text[i]!='\0'){
            
            printf("%c",text[i]);
            
            i++;


    }
   // printf("Inputted text is :%s\n",text);



    free(text);
    return 0;
}