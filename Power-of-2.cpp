#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INTMAX_MAX/2)
        {
            ans = ans * 2;
            return false;
        }
        
    }
    return 0;
}