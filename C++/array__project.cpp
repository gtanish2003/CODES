#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("Array elements are \n");
    for (i = 0; i < arr.length; i++)
        printf("%d\n", arr.A[i]);
}

void append(struct array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length] = x;
    arr->length++;
}

void insert(struct array *arr, int index, int value)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = value;
        arr->length++;
    }
}
int Delete(struct array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
void swap(int *x ,int * y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int LinearSearch (struct array *arr ,int key){
    int i;
    for (i=0 ;i<arr->length ;i++)
    {

        if (key==arr->A[i])
        {
            swap(&arr->A[i] , &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct array arr, int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid =(l+h)/2;
        if (key == arr.A[mid])
        return mid;
        else if (key < arr.A[mid])
        h=mid-1;
        else
        l=mid +1;

    }
    return -1;
}
int RBinarySearch( int a[],int l ,int h , int key){
    int mid;
    if (l<=h){
        mid =(l+h)/2;
        if (key==a[mid])
        return mid;
        else if (key<a[mid])
        return RBinarySearch(a,l,mid-1,key);
        else
        return RBinarySearch (a,mid+1 ,h,key);
    }
    return -1;
}

int Get(struct array arr, int index){
    if (index >=0 && index < arr.length)
    {
        return arr.A[index];

    }
    return -1;
}

void set(struct array *arr , int index , int x){
    if (index >=0 && index < arr->length){
        arr->A[index]=x;
    }
}

int max(struct array arr){
    int max;
    max=arr.A[0];
    int i;
    for (i=1; i<arr.length ;i++){
        if (arr.A[i] > max)
        {
            max=arr.A[i];
        }
    }
    return max;
}

int min (struct array arr )
{
    int min;
    int i;
    min=arr.A[0];
    for (i=1;i<arr.length ;i++)
    {
        if (arr.A[i] < min)
        min=arr.A[i];

    }
    return min;
}

int sum (struct array arr){
    int s=0;
    int i;
    for (i=0 ;i < arr.length ;i++)
    s+=arr.A[i];

    return s;

}

float average (struct array arr){
    return (float)sum(arr)/arr.length;
}

void Reverse(struct array * arr){
    int *B;
    int i,j;
     B= (int *)malloc (arr->length*sizeof(int));
     for (i=arr->length -1 , j=0 ; i>=0 ; i-- , j++)
    {
        B[j]=arr->A[i];
    }

    for (i=0 ; i<arr->length;i++)
    arr->A[i]=B[i];
}

void Reverse2(struct array *arr){
    int i,j;
    for (i=0 ,j<arr->length ; i<j ;i++ , j--){
        swap (&arr->A[i] ,&arr->A[j]);
        
    }
}



int main()
{
    struct array arr;
}