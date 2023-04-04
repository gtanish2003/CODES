#include<iostream>
using namespace std;

int peakindex(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }

    int leftsum=0;
    int rightsum=sum;
    for(int i=0;i<n;i++){
        rightsum=rightsum-arr[i];

        if (leftsum==rightsum){
            return i;
        }

        else{
            leftsum=leftsum + arr[i];
        }
    }

    return -1;

}

int main(){
    int nums[]={1,7,3,6,5,6};
    cout<<"Pivot index is :"<<peakindex(nums,6);
}
