#include<iostream>
#include<string>
using namespace std;

int countone(string arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]=='1'){
            count++;
        }
    }
    return count;


}

int main()
{
   
    string s,r;
    int length;
    cin>>length;
    cin>>s;
    cin>>r;
        

        cout<<s<<endl<<r<<endl;
    
   

   int  counts= countone(s,length);
   int countr= countone(r,length);


   if (counts==countr){
    cout<<"yes"<<endl;
   }
   
    else{
    cout<<"no"<<endl;
    }

return 0;
}


