#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
    return 0;
}

/*  *
    **
    ***
    ****

In this Pattern No. of lines = no. of rows = no. of times after loop will run
*/