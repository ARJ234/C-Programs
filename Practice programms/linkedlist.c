#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack*next;
};
struct stack *push(struct stack *h,int num){
    struct stack *temp,*newnode;
    if(h=NULL){
        temp->data=num;
        temp->next=NULL;
        h=temp;
        return temp;
    }
    else{
            newnode=(struct stack*)malloc(sizeof(struct stack));
            newnode->data=num;
            newnode->next=temp;
            temp=newnode;

            return temp;
    }

}

struct stack *pop(struct stack *h){
    struct stack *temp;
        temp=h;

        h=h->next;

        return h;

}
int display(struct stack *h){
    if(h->next==NULL){
        printf("NULL");

    }
    else{
        printf("%d-->",h->data);
        display(h->next);

    }


}

int main(){
    struct stack*top=NULL;
    top=push(top,78);
    top=push(top,34);
    top=push(top,65);
    display(top);
    top=pop(top);
    display(top);


}
