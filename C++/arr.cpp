#include <stdio.h>
#include <stdlib.h>
struct array
{
    int size;
    int length;
    int *A;
};

void print(struct array arr)
{
    int i;
    printf("Array elements are \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}

void insert(struct array *arr, int index, int value)
{

    int i;
    for (i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = value;
    arr->length++;
}

void Delete(struct array *arr, int index)
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
    }
}

int Lsearch(struct array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            printf("Search is successful");
            return i;
        }
    }
    return -1;
}

int Bsearch(struct array arr, int key)
{
    int l = 0;
    int h = arr.length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        ;
        if (key == arr.A[mid])
        {
            printf("%d", mid);
            break;
        }
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

void merging(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0, k = 0;
    int arr3[n + m];
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    for (; i < n; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }

    for (; j < m; j++)
    {
        arr3[k] = arr2[j];
        k++;
    }

    printf("Array after merging is \n");
    for (i = 0; i < (n + m); i++)
    {
        printf("%d \n", arr3[i]);
    }
}

int main()
{ 


    /*
    struct array arr;
    printf("enter the size of array ");
    scanf("%d", &arr.size);
    printf("enter the length of array ");
    scanf("%d", &arr.length);
    int i;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    printf("Enter array elements ");
    for (i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    print(arr);
    insert(&arr, 2, 100);
    print(arr);
    Delete(&arr, 2);
    print(arr);
    Lsearch(arr, 12);
    Lsearch(arr, 20);
    Bsearch(arr, 20);

    */

   int i;

    int n, m;
    printf("Enter no. of elements in array 1");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter elements in array 1 for merging \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter no. of elements in array 2");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter elements in array 2 for merging \n");
    for (i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    merging(arr1, n, arr2, m);
    return 0;
}