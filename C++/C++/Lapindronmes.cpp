#include <iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int *checkleft(string s, int s1, int e)
{

    int *countleft = new int(26);
    for(int i=0;i<26;i++){
        countleft[i]=0;
    }
    
    for (int i = s1; i <= e; i++)
    {
        countleft[s[i] - 97]++;
    }

    cout<<"The countleft array is :"<< endl;
    printarray(countleft,26);

   
    return countleft;
}

int *checkright(string s, int s1, int e)
{

    int *count = new int[26];
     for(int i=0;i<26;i++){
        count[i]=0;
    }
    for (int i = s1; i <=e; i++)
    {
        count[s[i] - 97]++;
    }

    cout<<"The count array is :"<< endl;
    printarray(count,26);
    return count;
}

void Tanish(int arr1[], int arr2[])
{
    int i = 0;
    int flag = 0;
    for (i = 0; i < 26; i++)
    {

        if (arr1[i] != arr2[i])
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)

        cout << "YES" << endl;
}

int main()
{
    cout<<" Enter the string:"<<endl;
    string s;
    cin >> s;
    int n = s.size();
    int e = n;
    int s1 = 0;
    int mid = s1 + (e - s1) / 2;

    if (n % 2 == 0)
    {
        Tanish(checkleft(s, 0, mid), checkright(s, mid + 1, n));
    }

    else
    {
        Tanish(checkleft(s, 0, mid - 1), checkright(s, mid + 1, n));
    }
}
