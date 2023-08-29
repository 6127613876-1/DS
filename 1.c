#include <stdio.h>
#define N 5
typedef struct
{
    int items[N];
    int front;
    int rear;
} Queue;
void enqueue(Queue *q, int value)
{
    if (q->rear == N - 1)
    {
        printf("Queue is full.\n");
        return;
    }
    if (q->front == -1)
    {
        q->items[++(q->rear)] = value;
    }
}
int dequeue(Queue *q)
{
    if (q->front == q->rear)
    {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->items[++(q->front)];
}

void copyQueue(Queue *q1, Queue *q2)
{
    while (q1->front != q1->rear)
    {
        int element = dequeue(q1);
        enqueue(q2, element);
    }
}
int main()
{
    int choice;
    Queue queue1, queue2;
    queue1.front = -1;
    queue1.rear = -1;
    queue2.front = -1;
    queue2.rear = -1;
    int a;
    for (int i = 0; i < N - 1; i++)
    {
        printf("Enter the element");
        scanf("%d", &a);
        enqueue(&queue1, a);
    }
    copyQueue(&queue1, &queue2);
    printf("Elements in queue2: ");
    while (queue2.front != queue2.rear)
    {
        printf("%d ", dequeue(&queue2));
    }
    printf("\n");
    return 0;
}