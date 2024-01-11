#include <stdlib.h> 
#include <stdio.h>

struct Node
{
    int element;
    struct Node *nextElement;
};

struct conceptQueue
{
    struct Node *frontElement, *rearElement;
};
struct Node* nodeCreation(int k)
{
     struct Node*temp=(struct Node*)
malloc(sizeof(struct Node));
    temp->element = k;
    temp->nextElement = NULL;
    return temp;
};
struct conceptQueue *queueCreation()
{
    struct conceptQueue*que=(struct conceptQueue*)malloc(sizeof (struct conceptQueue));
    que->frontElement = que->rearElement = NULL;
    return que;
};
void addElement(struct conceptQueue *que, int k)
{
// Create a new LL node
    struct Node *temp = nodeCreation(k);
// If queue is empty, then new node is front and rear both 
    if (que->rearElement == NULL)
    {
        que->frontElement = que->rearElement = temp;
        printf("%d enqueued\n",*que->rearElement);
        return;
    }
    que->rearElement->nextElement = temp;
    que->rearElement = temp;
    printf("%d enqueued\n",*que->rearElement);
    
}
struct Node *removeElement(struct conceptQueue *que)
{
    if (que->frontElement==NULL){
       return NULL;
    }
    struct Node *temp = que->frontElement;
    que->frontElement = que->frontElement->nextElement;
    
    
    printf("\n%d dequeued",*temp);
    free(temp);
    return;
}
int main()
{
    struct conceptQueue *que = queueCreation();
    addElement(que, 10);
    addElement(que, 20);
    
    
    addElement(que, 30);
    addElement(que, 40);
    addElement(que, 50);
    
    removeElement(que);
    removeElement(que);
    
    return 0;
}