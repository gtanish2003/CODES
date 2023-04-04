#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void pairsum(int arr[],int size,int target){

    sort(arr,arr+size);
    int l=0;
    int r=size-1;
    while(l < r){
        if (arr[l]+arr[r]<target){
            l++;
        }

        else if (arr[l]+arr[r] >  target){
            r--;

        }

        else{
            cout<<arr[l]<<" ,"<<arr[r]<<endl;
            l++;
            r--;
        }

    }
}

int main(){

    int nums[]={1,2,3,4,5};
    pairsum(nums,5,5);
}