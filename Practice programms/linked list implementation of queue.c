#include <stdlib.h> 
#include <stdio.h>

struct QNode
{
    int key;
    struct QNode *next;
};

struct Queue
{
    struct QNode *front, *rear;
};
struct QNode* newNode(int k)
{
     struct QNode*temp=(struct QNode*)
malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
};
struct Queue *createQueue()
{
    struct Queue*q=(struct Queue*)malloc(sizeof (struct Queue));
    q->front = q->rear = NULL;
    return q;
};
void enQueue(struct Queue *q, int k)
{
// Create a new LL node
    struct QNode *temp = newNode(k);
// If queue is empty, then new node is front and rear both 
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        printf("%d enqueued\n",*q->rear);
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
    printf("%d enqueued\n",*q->rear);
    
}
struct QNode *deQueue(struct Queue *q)
{
    if (q->front == NULL){
       return NULL;
    }
    struct QNode *temp = q->front;
    q->front = q->front->next;
    
    
    printf("\n%d dequeued",*temp);
    free(temp);
    return;
}
int main()
{
    struct Queue *q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    
    
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    
    deQueue(q);
    deQueue(q);
    
    return 0;
}