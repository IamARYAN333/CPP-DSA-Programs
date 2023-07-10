#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    
        for (int  i = 1; i <= n; i++)
    {
        for (int space = i-1; space--;)
        {
            cout<<" ";
        }
        for (int j = 1; j<=n-i+1; j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
    
    // int i = 1;
    // while (i<=n)
    // {
    //     int space = i-1;
    //     while(space)
    //     {
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j<=n-i+1)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //         cout<<endl;       
    //         i++;
    // }
    
    return 0;
}

/* 11111
    2222
     333
      44
       5 This Pattern is made including spaces */