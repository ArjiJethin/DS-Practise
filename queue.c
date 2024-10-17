#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

int isfull()
{
    return (front == MAX - 1);
}

int isempty()
{
    return (front == -1 || front > rear);
}

int size()
{
    if (isempty())
    {
        return 0;
    }

    return (rear - front + 1);
}

void enqueue(int value)
{
    if (isfull())
    {
        printf("Queue is full! cannot enqueue %d into the queue.\n", value);
    }

    else
    {
        if (front = -1)
        {
            front = 0;
        }

        queue[++rear] = value;
        printf("%d enqueued into queue.\n", value);
    }
}

int dequeue()
{
    if (isempty())
    {
        printf("Queue is empty! cannot dequeue from the queue.\n");
        return -1;
    }

    else
    {
        int dequeued_element = queue[front];
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
        printf("%d dequeued out of the queue.\n", dequeued_element);
        return dequeued_element;
    }
}

int peek()
{
    if (isempty())
    {
        printf("Queue is empty! cannot peek from the queue.\n");
        return -1;
    }

    else
    {
        return queue[rear];
    }
}

int display()
{
    if (isempty())
    {
        printf("Queue is empty! Cannot display the queue.\n");
        return -1;
    }

    else
    {
        printf("The elements of the queue are:- \n");
        for (int i = 0; i <= rear; i++)
        {
            if (i < front)
            {
                continue;
            }
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    printf("Front element is: %d\n", peek());
    printf("Size of the queue is: %d\n", size());
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();

    return 0;
}
