/* This Program uses Binary Search */

#include<iostream>
#include<vector>
using namespace std;

int peakindex(vector<int>& arr)
{
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;    
    }
    return s;
}
int main(){
    int arr[5] = {1,2,3,4,5}; 
    peakindex();
    return 0;
}

/* Program runs successfully in Codestudio IDE */