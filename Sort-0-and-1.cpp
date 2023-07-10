// This Program sort 0 and 1 in an array by using 2 Pointer approach

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        // agar yaha pahuch gaye ho,it means arr[left]==1 and arr[right]==0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortOne(arr, 8);
    printArr(arr, 8);
    return 0;
}


/* In an array arr[] = {0,1,0,2,1,0,2,0,1} sort 0,1 and 2 */