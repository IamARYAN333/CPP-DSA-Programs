/*  This program gives answer but its Complexity is worst

#include<iostream>
#include<vector>
// #include<math.h>
using namespace std;

vector<int>  intersection(int arr1[],int n,int arr2[],int m)
{
    int element;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
         element = arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        if (element == arr2[j])
        {
            ans.push_back(element);
            arr2[j] = -11223;
            break;
        }
        
    }
    return ans;
}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {2,7,8,9,5};
    intersection(arr1,6,arr2,5);
    return 0;
} */




/*  this program is best in terms of Complexity 

#include<iostream>
#include<vector>
using namespace std;

vector<int>  intersection(int arr1[],int n,int arr2[],int m)
{
    int i=0,j=0;
    vector<int>ans;
    while (i<n && j<m)
    {
        if (arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;

        }
        else
        {
            j++;
        }
        
    }
    return ans;
    // cout<<ans;
}

int main(){
    return 0;
}
    
*/