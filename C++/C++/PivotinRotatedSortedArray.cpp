#include<iostream>
using namespace std;

int pivot(int nums[],int n){
     int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
          mid=s+(e-s)/2;
        if (nums[mid]>=nums[0]){
            s=mid+1;
        }

        else{
            e=mid;
        }

        
    }

    return s;

}
int main(){
    int arr[]={7,9,10,2,3};
    int ans=pivot(arr,5);
    cout<<ans;
    


}