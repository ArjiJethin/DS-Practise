#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;

int isfull()
{
    return top == MAX - 1;
}

int isempty()
{
    return top == -1;
}

void push(int value)
{
    if (isfull())
    {
        printf("Stack Overflow! cannot push %d into the stack.\n", value);
    }
    else
    {
        stack[++top] = value;
        printf("%d is pushed into the stack.\n", value);
    }
}

int pop()
{
    if (isempty())
    {
        printf("There is nothing to pop from the stack.\n");
        return -1;
    }
    else
    {
        int popped_value = stack[top--];
        printf("%d popped from the stack.\n", popped_value);
        return popped_value;
    }
}

int peek()
{
    if (isempty())
    {
        printf("There is nothing to peek from the stack.\n");
        return -1;
    }
    else
    {
        return stack[top];
    }
}

void display()
{
    if (isempty())
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    display();

    push(5);
    push(6);

    pop();
    pop();

    display();

    printf("Top element is: %d\n", peek());

    return 0;
}