#include <stdio.h>
#define N 5
int q[N];  
int front = -1;  
int rear = -1;
int main(){  
    int choice;
    do
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter the choice");
        scanf("%d",&choice);
        switch (choice)
        {
            case(1):
            {
                int a;
                printf("Enter the element");
                scanf("%d",&a);
                enqueue(a);
                break;
            }
            case(2):
            {
                dequeue();
                break;
            }
            case(3):
            {
                display(q);
                break;
            }
            case(4):
            {
                exit(0);
            }
            default:
            {
                printf("invalid choice");
                break;
            }
        }
    }while(choice!=4);
}
void enqueue(int a){
    if (IsQueueFull()==0)
    {
        if (front == -1)
    {  
        front = 0;
        rear++;  
        q[rear] = a;  
    }
    else
    {
        rear++;
        q[rear]=a;
    }
    }
}
void dequeue()
{
     if (IsQueueEmpty()==0)
    {
        printf("The element dequeue is %d\n",q[front]);
        front++;
    }
}
void display(int q[N])
{
    for(int i=front;i<rear+1;i++)
    {
        printf("%d ",q[i]);
    }
    if(q[N-1]!=0)
    {

        printf("Queue is full\n");
    }
}
int IsQueueFull()
{
    if (rear == N - 1) {
        printf("The Queue is Full\n");
        return -1;
    }
    return 0;
}
int IsQueueEmpty()
{
    if (q[front]==0) {
        printf("The Queue is Empty\n");
        return -1;
    }
    return 0;
}