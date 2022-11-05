#include<stdio.h>
#include<stdlib.h>
#pragma GCC diagnostic ignored "-Wwrite-strings"
struct Node{
    int roll;
 char * name;
    int phone;
    int per;
    struct Node *next;


} *first =NULL;

void insert (int pos , int roll ,char *name,int phone,int per){
    int i;
    struct Node *t,*p;
    if (pos==0)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->roll=roll;
        t->name=name;
        t->phone=phone;
        t->per=per;
        t->next=first;
        first=t;
}
else if (pos>0){
    p=first;
    for(i=0;i<pos-1 &&  p ;i++){
        p=p->next;
        }
        if (p)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
             t->roll=roll;
        t->name=name;
        t->phone=phone;
        t->per=per;
        t->next=p->next;
        p->next=t;
        }
}
} 

void display(struct Node *p){
    while(p){
        printf("%d \t",p->roll);
        printf("%s \t",p->name);
        printf("%d \t",p->phone);
        printf("%d \t",p->per);
        p=p->next;
        printf("\n");
    }
}

void del(int pos){
    struct Node *p,*q;
    int i;
    if(pos==1){
        p=first;
        first=first->next;
        delete p;

    }
    else{
        p=first;
        q=NULL;
        for(i=0;i<pos-1  && p;i++){
            q=p;
            p=p->next;

        }
        if (p)
        {
            q->next=p->next;
            delete p;


        }
    }
}


void reverse(struct Node * p){
    struct Node *q,*r;
    p=first;
    q=NULL;
    r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;

            }
            first =q;

}

void checkloop(struct Node *p){
    p=first;
    struct Node *q=first;
    do {
        p=p->next;
        q=q->next;
        if (q)
        q=q->next;

    }while (p && q);

    if (p==q){
        printf("Loop present\n");
    }
    else{
        printf("Loop is not present \n");
    }
}

int main(){
    insert(0,8,"Tanish",80656,97);
    insert(1,18,"Shivam",563657,57);
    insert(2,28,"Aditya",80658,87);
    insert(3,38,"Jeevanshu",7656,77);
    insert(4,48,"Pranjal",886,87);



display(first);

del (2);
printf("After deleting is \n");
display (first);

printf("After reversing is \n");
reverse(first);
display (first);

checkloop(first);
}


    


