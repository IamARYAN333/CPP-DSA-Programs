#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = n-i; space--;)
        {
            cout<<" ";
        }
        for (int  j = 1; j <=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
        
        
    }
    
    // int i = 1;
    // while (i<=n)
    // {
    //     int space = n-i;
    //     while (space)
    //     {
    //         cout<<" ";
    //         space--;
    //     }

    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    return 0;
}

/*    1
     22
    333
   4444 */  