#include <iostream>
using namespace std;
int setBits(int n)
{
    int count = 0;
    while (n)
    {
        int bit = n & 1;
    if (bit==1)
        count++;
        n = n>>1;

    }
    return count;
};
int main()
{
    int n;
    cin>>n;
    cout<<" Number of Setbits is "<<setBits(n);
    return 0;
}