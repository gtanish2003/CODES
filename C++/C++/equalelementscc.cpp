#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int count=0;
    int ans=arr[0];

    for(int i=0;i<5;i++){
        if (arr[i]!=ans)
        count++;
    }

    cout<<count;
}