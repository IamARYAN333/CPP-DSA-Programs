#include <iostream>
using namespace std;
int triplet(int arr[], int n)
{
    int s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << i << j << k;
                }
            }
        }
    }
}
int main()
{
    int s;
    int arr[5] = {1, 2, 3, 4, 5};
    triplet(arr, 5);
    return 0;
}

/* Given an array arr[] = {1,2,3,4,5} and integer s = 12 triplet sum for s = 5+4+3 */