#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char name[10];
    int m1,m2,m3;
};
void main()
{
    struct student s[10];
    int total,i,n;
    float avg;
    clrscr();
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        printf("\nEnter the Student detail:");
    printf("\nRoll no:\t");
    scanf("%d",&s[i].rollno);
    printf("\nName:\t");
    scanf("%s",s[i].name);
    printf("\nFirst subject mark:\t");
    scanf("%d",&s[i].m1);
    printf("\nSecond subject mark:\t");
    scanf("%d",&s[i].m2);
    printf("\nThird subject mark:\t");
    scanf("%d",&s[i].m3);
    total=s[i].m1+s[i].m2+s[i].m3;
    avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    printf("\nTOTAL=%d\nAVERAGE=%f",total,avg);
    if((s[i].m1>=50)&&(s[i].m2>=50)&&(s[i].m3>=50))
        if(avg>=75)
            printf("\n DISTINCTION");
        else if((avg>=60)&&(avg<75))
            printf("\n FIRST CLASS");
        else if((avg>=50)&&(avg<60))
            printf("\n SECOND CLASS");
        else
            printf("\n FAIL");
    getch();
}