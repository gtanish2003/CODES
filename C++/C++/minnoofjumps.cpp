#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr = {1,1,3,2,6,7};
    int n = 6;

    int i = 0;
    
    int count = 1;
    while (i < n)
    {

        if (arr[i] > 0)
        {
            i = 0 + arr[i];
            count++;
            sort(arr.begin()+i,arr.begin()+i+arr[i],greater<int>());
            i = arr[i];
        }
    }

    cout<<count;
}