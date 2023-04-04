#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr1[]={1,2,2,2,3,4};
    int arr2[]={2,2,3,3};

    int n=6 ,m=4 ,i=0,j=0;

    vector<int>ans;

    while(i<n &&  j<m){
        if (arr1[i]<arr2[j]){
            i++;
        }

        else if (arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    cout<<"The answer array is :"<<endl;
    for (int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }

}