#include<iostream>
using namespace std;

void reverse (int num[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(num[start],num[end]);
        start++;
        end--;
    }

}

int main()
{
    int arr[]={1,2,3,4,5};

    reverse(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    
}