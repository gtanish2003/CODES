#include<iostream>
using namespace std;

bool isPossible(int arr[3][4],int n,int b,int mid){

}

int maxi(int arr[3][4],int n,int b){
    int s=0;
    int e=b;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        mid=s+(e-s)/2;

        if (isPossible()){
            ans=mid;
            s=mid+1;
        }

        else{
            e=mid-1;
        }
    }

return ans;

}