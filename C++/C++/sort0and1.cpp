#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={0,1,1,1,0,0,1,0,0};
    int n=9;
    int i=0;
    int j=n-1;
    while(i<j){
        if (arr[i]==0){
            i++;
        }

        else if (arr[j]==1){
            j--;

        }

        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }


    cout<<"Array after sorting is :"<<endl;
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}