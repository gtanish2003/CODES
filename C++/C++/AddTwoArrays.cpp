#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Add(int arr1[],int n,int arr2[],int m){
    int i=n-1;
    int j=m-1;
    int carry=0;

    vector<int >ans;
    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        i--;
        j--;
        ans.push_back(sum);
        }

   //first case 
        while(i>=0){
            int sum=arr1[i]+carry;
             carry=sum/10;
        sum=sum%10;
        i--;
       
        ans.push_back(sum);
            
        }

    // second case    
        while(j>=0){
            int sum=arr2[j]+carry;
             carry=sum/10;
        sum=sum%10;
        j--;
       
        ans.push_back(sum);
            
        }

        //third case

        while(carry!=0){
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }


        reverse(ans.begin(),ans.end());

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }

}

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={6};
    Add(arr1,4,arr2,1);
}