#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int arr[]={0,1,0,0,3,12};
    int l=0,r=0;
    int n=6;
    while(r<n){
        if (arr[r]==0)
        r++;
        else {
            swap(arr[l],arr[r]);
            l++;
            r++;
        }
    }

    cout<<"Array after moving zeros to end is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}