#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while (j<=n-i+1)
        {
            cout<<"*";
            j = j + 1;
        }cout<<endl;
        i = i + 1;
        
        
     }
       
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int space = i-1; space--;)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j<=n-i+1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }
    
    return 0;
}

/* *****
    ****
     ***
      **
       *  Print this pattern that including spaces */