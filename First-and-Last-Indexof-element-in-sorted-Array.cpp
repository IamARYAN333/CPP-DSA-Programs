// This Program uses Binary Search 

#include<iostream>
using namespace std;

int First(int arr[],int n,int key)
{
    int s=0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        if (key > arr[mid])
        {   // Move to right in Array
            s = mid + 1;
        }
        if (key < arr[mid])
        {   // Move to left in Array
            e = mid - 1;
        }
        
        mid = s + (e-s)/2;

    }
    return ans;
}

int Last(int arr[],int n,int key)
{
    int s=0, e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid+1;
        }
        if (key > arr[mid])
        {   // Move to right in Array
            s = mid + 1;
        }
        if (key < arr[mid])
        {   // Move to Left in Array
            e = mid - 1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[11] = {1,2,3,4,5,5,5,5,9,10,11};

    cout<<"First Occurence of 5 is at Index "<<First(arr,11,5)<<endl;   
    cout<<"Last Occurence of 5 is at Index "<<Last(arr,11,5)<<endl;   
    return 0;
} 

/*
pair<int,int> firstandlast(vector<int>&arr,int n,int key)
{
    pair<int,int> p;
    p.first = first(arr,n,key);
    p.second = last(arr,n,key);

    return p;
}   
  This program can also be done using Pair */

/* Total Number of Occurences of element = (Last Index - First Index) + 1 */