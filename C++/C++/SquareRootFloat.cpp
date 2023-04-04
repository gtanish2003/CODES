#include <iostream>
using namespace std;

int sqrtint(int num)
{
    int arr[num + 1];
    int start = 0;
    int end = num;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {

        mid = start + (end - start) / 2;
        int square = mid * mid;

        if (square > num)
        {
            end = mid - 1;
        }

        else if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }

        else
        {
            return mid;
        }
    }
    return ans;
}

double morePrecision(int num, int precision, int tempSol)
{
    double factor = 1, ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int tempsol = sqrtint(n);

    double answer = morePrecision(n, 3, tempsol);
    cout << "The square root of any number is:" << answer << endl;
}