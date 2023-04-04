#include <bits/stdc++.h>  
long long threeWaySplit(int n, vector<int> arr)
{ 
 int l = 0;
  int h = n - 1;
  long long ans = 0;
  int lsum = arr[0];
  
   int rsum=arr[n-1]; 
    while (l < h)
  {                     
  if (lsum == rsum)
    {
      ans = lsum;
      lsum += arr[l + 1];
      l++;
    }
    else if (lsum < rsum)
    { 
      lsum+=arr[l+1]; 
        l++;  
    }
    else
    { 
      rsum += arr[h - 1];
      h--;
    }
  }
  return ans;
}