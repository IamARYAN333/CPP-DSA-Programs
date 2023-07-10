/*
#include<iostream>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int mid)
{
    int cowCount = 1;
    int lastPos = stalls[0]; 

    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i]-lastPos >= mid)
        {
            cowCount++;
            if (cowCount==k)
            {
                return true;
            }
             lastPos = stalls[i];
        }
        
    }
    return false;
}

int aggressiveCows(vector<int> &stalls,int k)
{
    sort(stalls.begin(), stalls.end());

    int s = 0;
    int maxi = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (isPossible(stalls,k,mid))
        {
            ans = mid;
            s = mid + 1;
        }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
    }
        return ans;
}

int main()
{    
    return 0;
}   
    */


// Coding Ninjas Solution

 #include <bits/stdc++.h>

    using namespace std;
    bool isPossible(int a[], int n, int cows, int minDist) {
      int cntCows = 1;
      int lastPlacedCow = a[0];
      for (int i = 1; i < n; i++) {
        if (a[i] - lastPlacedCow >= minDist) {
          cntCows++;
          lastPlacedCow = a[i];
        }
      }
      if (cntCows >= cows) return true;
      return false;
    }
    int main() {
      int n = 5, cows = 3;
      int a[]={1,2,8,4,9};
      sort(a, a + n);

      int low = 1, high = a[n - 1] - a[0];

      while (low <= high) {
        int mid = (low + high) >> 1;

        if (isPossible(a, n, cows, mid)) {
          low = mid + 1;
        } else {
          high = mid - 1;
        }
      }
      cout << "The largest minimum distance is " << high << endl;

      return 0;
    }