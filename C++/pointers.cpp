#include <stdio.h>
#include <iostream>
int arr1[10][10], arr2[10][10], arr3[10][10];
void print(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
            printf("%d", arr3[i][j]);
        printf("\n");
    }
}

void transpose(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
            arr3[i][j] = arr1[j][i];
        printf("Transpose of matrix is \n");
        print(a);
    }
}

void triangle(int a)
{
    int i, j;
    printf("Upper triangular matrix is \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (i > j)
                printf("0");
            else
                printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Lower triangular matrix is \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (i < j)
                printf("0");
            else
                printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
}

void mul(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            int sum = 0;
            for (int k = 0; k < a; k++)
                sum = sum + (arr1[i][k] * arr2[k][j]);
            arr3[i][j] = sum;
        }
    }
    printf("Multiplication is \n");
    print(a);
}

void subtraction(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("Subtraction of matrix is \n");
    print(a);
}

void addition(int a)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Addition of matrix is \n");
    print(a);
}

int main()
{
    int y;
    do
    {
        int n, a;
        printf("Enter \n   1.Addition \n    2.Subtraction\n    3.Upper and Lower triangle \n    4.Multiplication\n   5.Transpose\n");
        scanf("%d", &n);
        printf("Enter size of matrix \n");
        scanf("%d", &a);
        if (n == 3)
        {
            printf("Enter matrix 1\n");
            int i, j;
            for (i = 0; i < a; i++)
            {
                for (j = 0; j < a; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
        }
        else
        {
            printf("Enter matrix 1\n");
            int i, j;
            for (i = 0; i < a; i++)
            {
                for (j = 0; j < a; j++)
                {
                    scanf("%d", &arr1[i][j]);
                }
            }
            if (n != 3 && n != 5)
            {
                printf("Enter matrix 2 \n");
                int i, j;
                for (i = 0; i < a; i++)
                {
                    for (j = 0; j < a; j++)
                    {
                        scanf("%d", &arr2[i][j]);
                    }
                }
            }
        }

        if (n == 1)
            addition(a);
        else if (n == 2)
            subtraction(a);
        else if (n == 3)
            triangle(a);
        else if (n == 4)
            mul(a);
        else if (n == 5)
            transpose(a);
        else
        {
            printf("Invalid input \n");
        }
        printf("Want to perform again?\n preass 1 \n ");
        scanf("%d", &y);
        
        
    }while (y == 1);
            
        return 0;
}
