#include <stdio.h>
/*int pow(int n ,int m)
{
    if (m==0)
    return 1;
    else
    return pow(n,m-1)*n;
}
*/

int pow_lessspace(int m, int n)
{
    if (n == 0)
        return 1;

    else if (n % 2 == 0)
        return pow_lessspace(m * m, n / 2);
    else
        return m * pow_lessspace(m * m, (n - 1 )/ 2);
}
int main()
{
    /*int a,b, power ;
    printf("Enter the value of base\n");
    scanf("%d",&a);
    printf("Enter the exponent to which base is raised \n");
    scanf("%d",&b);
    power=pow(a,b);
    printf("The result is %d",power);
*/

    int r;
    r = pow_lessspace(3, 4);
    printf("The value is %d", r);
}