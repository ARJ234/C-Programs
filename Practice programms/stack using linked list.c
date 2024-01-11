#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack*next;
};

struct stack* push(struct node *h,int num){
    struct stack *newnode,*temp;
    temp = h;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=num;
    newnode->next=NULL;
    if(h == NULL){
        h = newnode;
        return h;
    }
    else{
    while(temp->next != NULL)
        temp=temp->next;
        temp->next = newnode;
        return h;
    }

}

int main(){
    struct stack*h=NULL;
    h=push(h,78);
    h=push(h,34);
    h=push(h,65);
    display(h);
    //top=pop(top);
    display(h);


}
