#include<iostream>
#include<algorithm>
using namespace std;

void tripletsum(int arr[],int size,int target){
    sort(arr,arr+size);
    int i,j,k;
    for(int i=0;i<size-2;i++ ){
         int d=target-arr[i];
         int j=i+1;
         int k=size-1;
         while(j < k){
            if (arr[j]+arr[k] < d){
                j++;
            }

            else if(arr[j] + arr[k] > d ){
                k--;
            }

            else{
                cout<< arr[i] << " ," << arr[j] << " ," << arr[k]  << endl;
                j++;
                k--;
            }
         }

    }
   

}
int main(){
    int nums[]={1,2,3,4,5};
    tripletsum(nums,5,9);
}