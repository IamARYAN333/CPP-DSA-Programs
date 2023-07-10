#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INTMAX_MAX/10) || (ans< INTMAX_MIN/10))
        {
            return 0;
        }
        
        ans = (ans * 10) + digit;
        n = n/10;
    }
     cout<<ans<<endl;

    return ans;
}

// ans should be in the range of Integer (2^31 >a> 2^31-1)