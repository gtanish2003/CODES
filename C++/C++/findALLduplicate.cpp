#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    int nums[100];

    vector<int>ans;

    cout << "Enter the values in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
    for(int i=0;i<n; i++){
         int index=fabs(nums[i])-1;
         int value=nums[index];

         if (value<0){
            ans.push_back(index+1);

         }

         else{
            nums[index]*=-1;
         }

    }

    cout<<"The answer array is :"<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   

}