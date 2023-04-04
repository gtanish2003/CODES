#include<iostream>
using namespace std;

int main(){

    int arr[]={3,7,2,3,7,2,4};
    int ans=0;
    for(int i=0;i<7;i++){
        ans=ans^arr[i];

    }
  cout<<"Unique element is :"<<ans<<endl;
  return 0;
}