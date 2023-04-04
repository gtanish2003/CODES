#include<iostream>
using namespace std;
int main()
{
    int n, ans=0, power=1, lastdigit;
    cout<<"Enter any Binary Number: ";
    cin>>n;
    while(n!=0)
    {
        lastdigit = n%10;
        ans = ans + (lastdigit*power);
        power = power*2;
        n= n/10;
    }
    cout<<"\nEquivalent Decimal Value = "<<ans;
    cout<<endl;
    return 0;
}