#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k)
{
    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }
        // copy temp into nums vector
        nums = temp;
}
int main(){
    int a[5] = {2,8,4,6,7};
    cout<<vector<int>rotate(a,2);
    return 0;
}