#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void input(struct array arr);
void display(struct array arr);
void append(struct array arr);
void insert(struct array arr);

int main()
{

    struct array arr;
    struct array *ptr;
    ptr=&arr;
    int n, i;
    printf("Enter size of array:\n");
    scanf("%d", &arr.size);
    ptr->A = (int *)malloc(arr.size * sizeof(int));
    ptr->length = 0;

    printf("How many entries you want to made in an array?\n");
    scanf("%d", &n);

    ptr->length = n;
    input(arr);
    display(arr);
    append(&arr);
    display(arr);
    insert(&arr);
    display(arr);
}

void input(struct array arr)
{
    int i;

    printf("Enter all elements \n");
    for (i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
}

void display(struct array arr)
{
    int i;

    printf("Displaying  all elements \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \n", arr.A[i]);
    }
}

void append (struct array *arr){
    int element, newlength;
    printf("Enter element you want to append\n");
    scanf("%d",&element);

    arr->A[arr->length]=element;
    newlength=arr->length++;

    

}

void insert (struct array * arr){
    int index, value;
    int newlength=arr->length++;
    printf("Enter the index \n");
    scanf("%d",&index);
    printf("Enter the value \n");
    scanf("%d",&value);
    for (int i=newlength; i>index ; i--)
    {
        arr->A[i]=arr->A[i-1];

    }
    arr->A[index]=value;
    newlength++;

    

}