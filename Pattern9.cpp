#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }


//  int i = 1;  = Using while Loop
//  while (i<=n)
//  {
//     int j = 1;
//     while (j<=i)
//     {
//         cout<<i;
//         j = j+1;
//     } cout<<endl;
//       i = i+1;
  
    
//  }  
    return 0;
}

/*  1
    22
    333
    4444 */