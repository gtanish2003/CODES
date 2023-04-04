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

int binarysearch(int nums[],int key, int n,int s,int e){
    int low = s;
    int high = e;
   

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == key)
            return mid;

        else if (nums[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main(){
    int arr[]={7,9,1,2,3};
    int key=5;
    int n=5;
    int ans=-1;

    int pivotindex=pivot(arr,5);

    if (arr[pivotindex]<=key<=arr[n-1]){
        ans=binarysearch(arr,key,n,pivotindex,n-1);

    }

    else{
    ans=binarysearch(arr,key,n,0,pivotindex-1);

    }

    cout<<ans<<endl;
}
