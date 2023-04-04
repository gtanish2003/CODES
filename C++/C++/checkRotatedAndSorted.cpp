#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void check(int nums[],int n){
    int count=0;
  
    for(int i=1;i<n;i++){
        if (nums[i-1]>nums[i]){
            count++;
        }
    }

    if (nums[n-1]>nums[0]){
        count++;
    }
    
    if (count <=1){
        cout<<"Array is rotated and sorted as well!!"<<endl;
    }
    else{
        cout<<"Array is not rotated and sorted!!"<<endl;
    }
    
}

int main(){
    int arr[]={3,5,4,2,1};
    check(arr,5);
}