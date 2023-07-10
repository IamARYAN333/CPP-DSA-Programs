#include<iostream>
#include<vector>
#include<algorithm> /* This header file is used to active sort function */
using namespace std;
vector<vector<int>> pairsum(vector<int> &arr, int s)
{
    vector< vector<int> > ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));            
                temp.push_back(max(arr[i],arr[j]));            
                ans.push_back(temp);
            }
            
        }
           
    }
    sort(ans.begin(),ans.end()); // Here we use sort pre-defines function to sort the pairs.   
    return ans;
}
int main(){
    
    return 0;
}

/* Example - S = 7 arr[6] = {1,2,3,4,5,6} we have to find pair in sorted order that is equal to S on performing addition
ans = (1,6)(2,5)(3,4)(4,3)(5,2)(6,1) */

             