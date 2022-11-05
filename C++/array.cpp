#include <stdio.h>
#include<stdlib.h>
struct array {
    int *A;
    int length;
    int size;
};

void display(struct array arr);
void append(struct array *arr);
void insert(struct array *arr);
void deleted(struct array *arr);

int main()  {
    struct array arr;
    
    printf("Enter the size of an array\n");
    scanf("%d",&arr.size);
    printf("Enter the length of an array\n");
    scanf("%d",&arr.length);
    int i;
    
    arr.A=(int *)malloc (arr.size*sizeof(int));
    printf("Enter array elements \n");
    for (i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.A[i]);
    }

    display(arr);
    append(&arr);
    display(arr);
    insert(&arr);
    display(arr);
    //deleted(&arr);
    //display(arr);

    
 
    
}

void display(struct array arr)
{
    int i;
    printf("Displaying array elements \n");
    for (i=0;i<arr.length;i++)
    printf("%d \n",arr.A[i]);
}

void append(struct array *arr){
    int element;
    printf("Enter the element u want to append\n");
    scanf("%d",&element);
    if (arr->length < arr->size)
    {
        arr->A[arr->length++]=element;

    }
}

void insert(struct array *arr){
    int index,value,i;
    printf("Enter the index \n");
    scanf("%d",&index);
    printf("Enter the value \n");
    scanf("%d",&value);
    if (index>=0 && index<=arr->length)
    {
        for (i=arr->length ; i>index ;i--)
        {
            arr->A[i]=arr->A[i-1];
            arr->A[index]=value;
            arr->length++;

        }
    }
}

void deleted(struct array *arr)
{
    int x,index,i;
    printf("Enter the index of value u want to delete \n");
    scanf("%d",&index);
    x=arr->A[index];
    for (i=index ; i<arr->length-1;i++)
    {
        arr->A[i]=arr->A[i+1];

    }
    arr->length-1;

}

