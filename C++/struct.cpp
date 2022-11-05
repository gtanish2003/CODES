#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle 
{
    int length;
    int breadth;

};
int main()
{   
    struct Rectangle r={10,5};
    struct Rectangle *P=&r;
    P->length=20;
    cout <<r.length;
    




}














































