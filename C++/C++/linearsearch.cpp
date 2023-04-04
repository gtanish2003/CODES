#include<iostream>
using namespace std;

bool search(int num[],int n, int key){
    for(int i=0;i<n;i++){
        if (key==num[i]){
            return 1;
        }
      
    }
    return 0;
    

}

int main(){

    int array[]={1,-2,4,5,8,-10};

    bool found=search(array,6,3);

    if (found){
        cout<<"Search is successfull"<<endl;

    }

    else{
        cout<<"Search is unsucessfull"<<endl;

    }

}