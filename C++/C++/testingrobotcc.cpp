#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    string s;
    cin >> s; // Enter string either in L or R
    vector<int> v;
    v.push_back(x);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            x = x - 1;
            v.push_back(x);
        }

        else
        {
            x = x + 1;
            v.push_back(x);
        }
    }
    cout << "The array is :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout<<endl;

    sort(v.begin(), v.end());
    int count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v[i + 1])
        {
            count++;
        }
    }

    cout<<"The no of unique elements in the array is :"<<count <<endl;
}