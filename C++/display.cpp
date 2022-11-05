#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

int main()
{

    struct array arr;
    int n, i;
    printf("Enter size of array:\n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("How many entries you want to made in an array?\n");
    scanf("%d", &n);

    printf("Enter all elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    printf("Displaying all elements \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \n", arr.A[i]);
    }
}