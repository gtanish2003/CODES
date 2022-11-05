#include <iostream>
using namespace std;
#include<stdio.h>
//passing pointers to a function
int add(int ,int);
int main()
{ int a,b,x;
  int (*p)(int,int);
  printf("Enter values\n");
  scanf("%d %d %d",&a,&b,&x);
  p=add;
  x=(*p)(a,b);
  printf("Adiition is %d",x);
}
int add (int a,int b)
{
    return a+b;
}
