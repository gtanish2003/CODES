#include<stdio.h>
#include<stdlib.h>
struct array {
    int A[5];
    int size;
    int length;
};

int main(){
    struct array arr={{10,20,30,40,50},10,5};
    int index ,x ,i , newlength;

    printf("Enter the index of element u want to delete \n");
    scanf("%d",&index);
    
    x=arr.A[index];
    
    for (i=index ;i<arr.length-1;i++){
        arr.A[i]=arr.A[i+1];

    }
    newlength=arr.length-1;
    printf("Displaying array elements \n");
    for (i=0 ;i<newlength;i++){
        printf("%d \n",arr.A[i]);
    }



}