#include <iostream>
#include <stdio.h>


using namespace std;
int stack[100];
int top = -1;

int isFull()
{
    if (top == 99)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

int pop()
{
    int x;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    else
    {
        x = stack[top];
        top--;
    }
    return x;
}

void dec2bin(int dec)
{
    while (dec != 0)
    {
        push(dec % 2);
        dec = dec / 2;
    }
}

void print()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    while (!isEmpty())
    {
        printf("%d", pop());
    }
}

int main()
{
    int dec;
    printf("Enter the decimal number :");
    scanf("%d", &dec);
    dec2bin(dec);
    print();
    return 0;
}
