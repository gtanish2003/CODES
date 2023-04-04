#include<iostream>
using namespace std;

int peakindex(int arr[] , int n){
    int s=0;
    int e=n-1;

    int mid= s+(e-s)/2;

    while(s<e){

         
        if (arr[mid]<arr[mid+1]){
            s=mid+1;
        }

        else{
            e=mid;
        }

        mid=s+(e-s)/2;
    }

    return s;
}

int main(){
    int mountain[]={1,2,3,5,4};
    int ans=peakindex(mountain,5);
    cout<<"The peak element index in the mountain array is :"<<ans<<endl;

    return 0;

}