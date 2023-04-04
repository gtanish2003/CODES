#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int arr[],int n){
    int ans[n];
    for (int i=0;i<n;i++){
        ans[(i+1)%n]=arr[i];
    }

    arr=ans;

    cout<<"The array after rotation after k :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={1,7,9,11};
    rotate(arr,4);
}