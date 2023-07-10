#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for (int  i =1; i <=n; i++)
    {
        int count = i;
        for (int j = 1; j<=i; j++)
        {
            cout<<count;
            count = count + 1;
        }cout<<endl;
        
    }

    // int i = 1;  -- Another appproach without using Count variable
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=i)
    //     {
    //         cout<<i+j-1;
    //         j = j+1;
    //     }cout<<endl;
    //     i = i + 1;
        
    // }
    

    // int i = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     int count  = i;
    //     while (j<=i)
    //     {
    //         cout<<count;
    //         count = count + 1;
    //         j = j + 1;
    //     }cout<<endl;
    //     i = i+1;
        
    // }
    
   return 0;
}

/* 1
   2 3
   3 4 5
   4 5 6 7
   5 6 7 8 9 */