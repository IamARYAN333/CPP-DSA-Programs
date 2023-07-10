// In this we have to find duplicate element in an array that repeat 2 times
 
#include<iostream>
using namespace std;
int duplicate(int arr[], int N)

{
    int ans = 0;

    // XOR ing in all array elements

    for (int  i = 0; i < N-1; i++)
    {
        ans = ans^arr[i];
    }
    
    // XOR [1,N-1]

    for (int i = 1; i <N-1; i++)
    {
        ans = ans^i;
    }
    cout<<ans;
    // return ans;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,3,10};
    duplicate(a,10);
    return 0;
} 

/* Now also find multiple duplicate elements in an arrray on Leetcode
arr[10] = {1,2,3,4,5,6,3,8,4,10};
answer is 3 and 4 
Use leetcode discussion to solve this
*/