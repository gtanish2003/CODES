#include<iostream>
using namespace std;

int getMin(int num [], int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if (num[i] < min){
            min=num[i];


        }
    }
    return min;
}

int getMax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (num[i]>max){
            max=num[i];

        }
    }

    return max;
}

int main(){
    int num[100];
    int size;
    cout<<"Enter the size:"<<endl;
    cin>>size;

    //taking input in array

    cout<<"Enter values of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];

    }

    cout<<"The minimum value is :"<<getMin(num,size)<<endl;

    cout<<"The maximum value is :"<<getMax(num,size)<<endl;

    return 0;
}