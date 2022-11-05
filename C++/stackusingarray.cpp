#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int *s;
    int size;
    int top;
};

void create(struct Stack *st)
{
    printf("Entter size \n");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void display(struct Stack st)
{
    int i;
    printf("Stack is \n");
    for (i = st.top; i >= 0; i--)
    {
        printf("%d\n", st.s[i]);
    }
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack overflow \n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("Stack underflow \n");
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
        printf("Invalid position \n");
    else
    {
        x = st.s[st.top - pos + 1];
    }
    return x;
}

int stacktop(struct Stack st)
{
    if (st.top == -1)
        return -1;
    else
    {
        return st.s[st.top];
    }
}

int isempty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}

int isfull(struct Stack st)
{
    if (st.top == st.size - 1)
        return 1;
    else
        return 0;
}

int main()
{
    struct Stack st;

    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    push(&st, 60);

    printf("The deleted element is %d \n", pop(&st));

    printf("The value at index 2 is %d\n", peek(st, 2));

    display(st);
}