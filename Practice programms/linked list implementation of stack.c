#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h>
// A structure to represent a stack 
struct StackNode
{
    int Value;
    struct StackNode*nextValuePointer;
};

struct StackNode*createNewNode(int Value)
{
    struct StackNode*stackNode = ((struct StackNode*) malloc(sizeof(struct StackNode)));
    stackNode->Value = Value;
    stackNode->nextValuePointer = NULL;
    return stackNode;
}
int isEmpty(struct StackNode *ptr)
{
    return !ptr;
}
void pushElementInStack(struct StackNode** ptr, int Value)
{
    struct StackNode* stackNode = createNewNode(Value);
    stackNode->nextValuePointer = *ptr;
    *ptr = stackNode;
    printf("%d pushed to stack\n", Value);
}
int popElementFromStack(struct StackNode** ptr)
{
    if (isEmpty(*ptr)) return INT_MIN;
    struct StackNode* temp = *ptr;
    *ptr =  (*ptr)->nextValuePointer;
    int poppedElement = temp->Value;
    free(temp);
    return poppedElement;
}
int TopElement(struct StackNode* ptr)
{
    if (isEmpty(ptr)) return INT_MIN;
    return ptr->Value;
}

int main()
{
    struct StackNode* ptr = NULL;
    pushElementInStack(&ptr, 350);
    pushElementInStack(&ptr, 6);
    pushElementInStack(&ptr, 790);
    pushElementInStack(&ptr, 250);
    pushElementInStack(&ptr, 920);
    printf("\n\n\n");
    printf("%d popped from stack\n", popElementFromStack(&ptr));
    printf("%d popped from stack\n", popElementFromStack(&ptr));
    printf("Top element is %d\n", TopElement(ptr));
    return 0;
}