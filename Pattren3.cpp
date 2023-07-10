#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

/*  ***** 5 n=5
    **** 4
    *** 3
    ** 2
    * 1
In this pattern No. of rows = No. of cols */