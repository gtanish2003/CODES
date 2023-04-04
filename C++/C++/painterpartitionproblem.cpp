#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int arr[], int n ,int k ,int mid){
    int paintercount=1;
    int boardsum=0;
    for(int i=0;i<n;i++){
        if ((boardsum  + arr[i])<=mid){
            boardsum+=arr[i];

        }
        else{
            paintercount++;
            if (paintercount>k  ||  arr[i]> mid)
            return false;

            boardsum=arr[i];
        }
    }
    return true;
}

int mintime(int arr[], int n, int k){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];

    }

    int e=sum;

    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        mid=s+(e-s)/2;
        if (isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;

}
int main(){

    int arr[]={5,5,5,5};
    int k=2;
    cout<<mintime(arr,4,2);
    return 0;
}