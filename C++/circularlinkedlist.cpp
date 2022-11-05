#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;

} *head = NULL;

void insert(int pos, int value)
{
    struct Node *p, *t;
    int i;
    if (pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = value;

        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            p = head;
            while (p->next != head)
            {
                p = p->next;
            }

            p->next = t;
            t->next = head;
            head = t;
        }
    }

    else
    {
        p = head;
        for (i = 0; i < pos - 1; i++)
            p = p->next;
        t = new Node;
        t->data = value;
        t->next = p->next;
        p->next = t;
    }
}

void del(int pos)
{
    struct Node *p, *q;
    int x = -1,i;

    if (pos == 1)
    {
        p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        x = head->data;
        if (p == head)
        {
            delete head;
            head = NULL;
        }
        else {
            p->next=head->next;
            delete head;
            head=p->next;

        }
    }

    else{
        p=head;
        for(i=0;i<pos-2;i++)
        p=p->next;
        q=p->next;
        x=q->data;
        delete q;


    }

}

void display(struct Node *p)
{
    do
    {
        printf("%d\n", p->data);
        p = p->next;
    } while (p != head);
}

int main()
{
    struct Node *p;
    insert(0, 12);
    insert(1, 24);
    insert(2, 78);
    display(head);

    del (1);
    display(head);
}