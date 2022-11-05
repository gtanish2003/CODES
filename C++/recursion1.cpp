/* Sum of first n natural numbers  using recursion
#include<stdio.h>
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}
int main()
{
    int a, result;
    printf("Enter the number \n");
    scanf ("%d",&a);
    result=sum(a);
    printf("The final answer is %d \n ",result);
}*/

/* Sum of first n natural numbers  using formula */

#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n * (n + 1) / 2);
}
int main()
{
    printf("The sum is %d", sum(5));
}

/*From this example we can conclude that using recursion here
proves us costly, hence better to approach using direct formula*/