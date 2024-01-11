#include<stdio.h>
#include<conio.h>
union employee
{
    int empno;
    char name[10];
    float BP;
};
void main()
{
    union employee E1;
    float HRA,DA,netsalary;
    clrscr();
    printf("Enter the Employee details:\n");
    printf("Enter the Employee number:");
    scanf("%d",&E1.empno);
    printf("Enter the Employee name:");
    scanf("%s",&E1.name);
    printf("\nEnter the Basic pay:");
    scanf("%f",&E1.BP);
    HRA=E1.BP*0.2;
    DA=E1.BP*0.5;
    netsalary=HRA+DA+E1.BP;
    printf("\nHRA=%f\nDA=%f\n Netsalary=%f",HRA,DA,netsalary);
    getch();
}
