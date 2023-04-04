#include<iostream>
using namespace std;

void recatngle_pattern(int row, int col){
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            cout<<"*"<<"";
        }
        cout<<endl;
    }
}
void HollowRectanglePattern(int row,int col){
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if (i==1 || i==row){
                cout<<"*"<<"";
            }
            else if (j==1 || j==col){
                cout<<"*"<<"";
            }
            else{
                cout<<"";
            }
        }
        cout<<endl;
    }
}

void InvertedHalfPyramid(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*"<<"";
        }
        cout<<endl;

    }
}

void HalfPyramidAfter180Rotation(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if (j<=n-i){
                cout<<"";
            }
            else{
                cout<<"*"<<"";
            }
        }
        cout<<endl;
    }

}

void HalfPyramidUsingNumbers(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<i<<"";
        }
        cout<<endl;
    }
}

int main(){
    recatngle_pattern(5,4);
    HollowRectanglePattern(5,4);
    InvertedHalfPyramid(5);
    HalfPyramidAfter180Rotation(5);
    HalfPyramidUsingNumbers(5);
}