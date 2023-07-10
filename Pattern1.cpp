#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n)
    {
       int j = 1;
        while(j<=n)
        {
        cout<<"*";
        j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }

    
    return 0;
}

// for (int i = 1; i <=n; i++) -- //Pattern can also be print using this method
// {
//     for (int j = 1; j <= n; j++)
//     {
//         cout<<"*";
//     }
//        cout<<endl;
       
// }


/*  ***     -- This is the Pattern  i = Rows,j = Columns,n = no. of lines
    ***
    ***
        */ 