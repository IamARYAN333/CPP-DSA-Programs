#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    
    // Shift all non zero element to left
    int nonzero = 0;
    for (int j=0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j],nums[nonzero]);
            nonzero++;
        }
        
    }
    
};

int main(){
    
    return 0;
}