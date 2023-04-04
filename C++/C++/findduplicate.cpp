#include <iostream>
using namespace std;

int main()
{
    int arr[100] ;
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int ans = 0;
    cout<<"Enter the values of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "Duplicate value is :"<<ans << endl;
    return 0;
}