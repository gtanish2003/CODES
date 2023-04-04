#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum = pagesum + arr[i];
        }

        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }

            pagesum = arr[i];
        }
    }
    return true;
}

int bookallocation(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;
    cout << bookallocation(arr, n, m);
}





