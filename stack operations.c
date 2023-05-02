#define size 10
int top = -1;
int stack[size];

void push(int value)
{
    if (top == size - 1)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d inserted\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d popped\n", stack[top]);
        top--;
    }
}


