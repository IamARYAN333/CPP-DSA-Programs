#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            
            char ch = 'A' + i +j -2  ;
            cout<<ch;
        }cout<<endl;
        
    }
    return 0;
}

/*  j=1 j=2 j=3
i=1 A   B   C
i=2 B   C   D
i=3 C   D   E  This Pattern done using this logic */