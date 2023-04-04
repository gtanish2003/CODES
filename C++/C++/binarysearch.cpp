#include <iostream>
using namespace std;

int binarysearch(int arr[],int key, int n){
    int low = 0;
    int high = n - 1;
   

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}



int main()
{

    int arr[100];
    int n;
    cout << "Enter the value of the n:" << endl;
    cin >> n;

    cout << "Enter the values in the array in sorted order:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Our array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }

    cout << "Enter the key value to be searched:" << endl;
    int key;
    cin >> key;

   int ans= binarysearch(arr,key,n);
   cout<<ans;
}
    