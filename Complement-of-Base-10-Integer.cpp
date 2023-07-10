// Complement of Base 10 Integer

#include<iostream>
using namespace std;

int main(){
    // int n = 5;
    // int m = n;
    // int mask = 0;

    // //edge case
    // if (n == 0)
    // {
    //     //cout<<"1";
    //     return 1;
    // }
    
    // while (m!=0)
    // {
    //     mask - (mask << 1) | 1;
    //     m = m >> 1;
    // }
    
    // int ans = (~n) & mask;
    // cout<<ans;
    //  return 0;

    int n = 5;
    int mask = 1;
    while (mask<n)
    {
        mask = (mask<<1) + 1;
        return mask^n;
    }
    
    return 0;   
}