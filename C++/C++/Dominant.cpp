#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int count[1000]={0};
    int arr[1000];
    int n;
    int ans=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
   

   sort(count,count+n,greater<int>());

   for(int i=0;i<n;i++){
    cout<<count[i]<<"";
   }

   if (count[0]==count[1]){
    cout<<"NO";

   }
   else{
    cout<<"YES";
   }
    
}