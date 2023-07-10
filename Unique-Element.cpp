// This can be done by using XOR(^) operator.

#include<iostream>
using namespace std;

int unique(int arr[],int size)
{   
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    cout<<ans;
    // return ans;
}

int main(){
    int arr[9] = {5,4,3,5,4,3,7,8,7};
    unique(arr,9);
    return 0;
}