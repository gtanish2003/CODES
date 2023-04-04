#include<iostream>
using namespace std;

int sqrtint (int num){
    int arr[num+1];
    int start=0;
    int end=num;
    int mid=start + (end-start)/2;
    int ans;

    while(start<=end){
        
    int mid=start + (end-start)/2;

        if (mid*mid>num){
            end=mid-1;

        }

        else if (mid *mid < num){
             ans=mid;
            start=mid+1;
        }

        else{
            return mid;
        }
    }
    return ans;


}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<sqrtint(n);
}