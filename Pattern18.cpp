#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
     //int x = 0;
     char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            //char ch = 'A' + x  ;
            cout<<ch;
            ch++;
            //x++;
        }cout<<endl;
        
    }

    // int n;
    //  cin>>n;
    //  int x = 0;  
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
            
    //         char ch = 'A' + x  ;         an int value x can be added in 'A' to change its value
    //         cout<<ch;
    //         ch++;
    //         x++;
    //     }cout<<endl;
        
    // }
    return 0;
}

/* A
   BC
   DEF
   GHIJ
   KLMNO   */