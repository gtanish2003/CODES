#include <stdio.h>
int main()
{
    int A[10] = {8, 9, 4, 7, 6, 3, 10, 5, 14, 2};
    int length = 10;
    int i, key;
    printf("Enter the key element u want to search \n");
    scanf("%d", &key);
    for (i = 0; i < length; i++)
    {
        if (key == A[i])
        
            {
                printf("Element is found at index %d",i);
                break;
            }
        
    }
    


}