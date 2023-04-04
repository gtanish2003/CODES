#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }

        else if (arr[mid] > key)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int LastOccurrence(int arr[], int n, int key)
{

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            low = mid + 1;
        }

        else if (arr[mid] > key)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int nums[] = {3, 3, 3, 3, 3};

    int first = firstOccurrence(nums, 5, 3);

    int last = LastOccurrence(nums, 5, 3);

    int a[2];
    a[0] = first;
    a[1] = last;

    for (int i = 0; i < 2; i++)
    {
        cout << a[i] << " ";
    }

    int totalOccurrence= last-first+1;
    cout<<totalOccurrence;
}