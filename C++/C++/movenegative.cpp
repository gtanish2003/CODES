#include<iostream>
using namespace std;

void nonnegative(int a[],int n){
    int low=0;
    int high=n-1;

    while(low<=high){
        if (a[low]<0)
        low++;
        else if (a[high]>0)
        high--;
        else
        swap(a[low],a[high]);
    }

}

int main(){
    int arr[]={-12,11,-13,-5,6,-7,5,-3,-6};
    int n=9;
    nonnegative(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}