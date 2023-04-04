#include<iostream>
using namespace std;

int main(){

    int arr[10];
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    cout<<"Enter elements in array:"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Main idea behind question

    for (int i=0;i<n;i+=2){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

    cout<<"New array after swapping is :"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}