#include <iostream>
using namespace std;
int main()
{

        int n;
        cin >> n;
        int a[100001];
        
        for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

        if (n % 2 != 0)
        {
            cout << "NO"<<endl;
        }

        else
        {
            

            int count[n]={0};
            for (int i = 1; i < n; i++)
            {
                count[a[i]]++;
            }
            
            
            int flag = 0;
            
            
            
            for (int i = 1; i < n; i++)
            {
                if (count[i] % 2 != 0)
                {
                    
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
            {
                cout << "YES"<<endl;
            }

            else
            {
                cout << "NO "<<endl;
            }
        }
    

    return 0;
}