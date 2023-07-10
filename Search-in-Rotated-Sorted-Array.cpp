// This Program is done using Binary Search

#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(vector<int> &arr, int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
            // go to right part
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    { // BS on first Line
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    { // BS on second Line
        return binarySearch(arr, 0, pivot - 1, k);
    }
}
int main()
{   int arr[5] = {7,9,1,2,3};

    return 0;
}

/* Array = {1,2,3,7,9} Sorted Array = {7,9,1,2,3} */