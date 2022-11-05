#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, r, temp, i;
    float sum = 0;
    printf("\n Enter first number of a G.P.series:\n");
    scanf("%d", &a);
    printf("\n Enter the total numbers in the G.P. series:\n");
    scanf("%d", &n);
    printf("\n Enter the common Ratio:\n");
    scanf("%d", &r);
    temp = a;
    printf("The G.P. series is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", temp);
        sum = sum + temp;
        temp = temp * r;
    }
    printf("\n The sum of Geometric Series is = %f \n ", sum);
    return 0;
}
