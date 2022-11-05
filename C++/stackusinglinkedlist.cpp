#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;

} *top = NULL;

void push(struct Node *p, int x)
{
    struct Node *t = new Node;
    if (t == NULL)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(struct Node *p)
{
    int x = -1;
    if (top == NULL)
    {
        printf("Stack Underflow \n");
    }

    else
    {
        p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

int peek(int pos)
{
    int x = -1;
    struct Node *p = top;
    int i;
    for (i = 0; i < pos - 1 && p; i++)
        p = p->next;

    if (p)
        return x = p->data;
    else
        return -1;
}

void display(struct Node *p)
{
    int i;
    p = top;
    while (p)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    struct Node *p;
    push(p, 10);
    push(p, 20);
    push(p, 30);
    push(p, 40);
    push(p, 50);
    push(p, 60);

    push(p, 70);

    printf("The deleted value is %d \n", pop(p));
    printf("The deleted value is %d \n", pop(p));
    printf("The value at index 3 is %d \n", peek(3));

    display(p);
}