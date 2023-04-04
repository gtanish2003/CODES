#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid)
{
    int cowCount = 1;
    int lastposition = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastposition >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }

            lastposition = arr[i];
        }
    }
    return false;
}

int distance(int arr[], int n, int k)
{
    int s = 0;
    int maxi = -1;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {4, 2, 1, 3, 6};
    int n = 5;
    int k = 2;
    cout << distance(arr, n, k);
}