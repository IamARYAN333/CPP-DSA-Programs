// This is also Done by Binary Search. It also uses Book Alliocation Problem approach 

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid)
{
    int painter = 0;
    int section = 0;

     for (int i = 0; i < n; i++)
    {
        if (section + arr[i] <= mid)
        {
            section += arr[i];
        }
        else
        {
            painter++;
            if (painter > m || arr[i] > mid)
            {
                return false;
            }
            section += arr[i];
        }
    }
    return true;
}

int allocatesection(int arr[],int n,int m)
{
     int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;

    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[4] = {5,5,5,5};
    cout<<"Answer is "<<allocatesection(arr,4,2);   
    return 0;
}