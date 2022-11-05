#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k;

    int a[10][10],b[10][10],result[10][10];
    printf("Enter the order of the first matrix\n ");
    scanf("%d%d",&m,&n);
    printf("Enter the order of the second matrix\n ");
    scanf("%d%d",&p,&q);

    if (n!=p)
    printf("Matrix multiplication is incomplete");
    else
    {
        printf("Enter the elements of matrix A\n");
        for (i=0; i<m;i++)
        {
            for (j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);

            }
        }

        printf("Enter elements in matrix B \n");
        for (i=0; i<p;i++)
        {
            for (j=0; j<q ;j++)
            {
                scanf ("%d",&b[i][j]);

            }
        }

        for (i=0 ;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                result[i][j]=0;
                for (k=0;k<p;k++)
                {
                    result [i][j]+=a[i][j]*b[i][j];
                }
            }
        }

        printf("The final product matrix is :\n");
        for (i=0; i<m ;i++)
        {
            for (j=0 ;j<q ;j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
    }

}   