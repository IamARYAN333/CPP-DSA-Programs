#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            char ch = 'A' +i -1 ;
            cout<<ch;
        }cout<<endl;
        
    }
    return 0;
}

/* j=1
i=1    A
i=2    BB
i=3    CCC */