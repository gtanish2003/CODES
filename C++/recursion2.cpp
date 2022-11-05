/*Factorial of a given number using recursion
#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int main()
{
    printf("Factorial of a given number is %d\t",fact(5));
    return 0;
}*/


/*Factorial of a given number using iterative approach*/
#include<stdio.h>
int fact(int n)
{
    int i,p=1;
    for (i=1;i<n;i++)
    {
        p=p*i;

    }
    return p;

}
int main()
{
    printf("The factorial of a given number is %d",fact(5));
}


/*In this example we can state that recursion occupy more space than 
iterative version, therefore no benefit of using recursion here*/