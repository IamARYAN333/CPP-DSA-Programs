// Method 1 - Simple Method
/*
#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {2, 5, 4, 1, 6};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}   */

// Method 2 - Swapping Using Vector
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int s = 0, e = v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for (int i = 0; i <v.size(); i++)
    {
        cout<< v[i] <<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v;

    v.push_back(11);    
    v.push_back(7);    
    v.push_back(3);    
    v.push_back(12);    
    v.push_back(4);

    vector<int> ans = reverse(v);
    cout<<"Printing reverse array"<<endl;
    print(ans);    
    return 0;
}  */

// Method 3 - Swap array at particular index

#include<iostream>
#include<vector>
using namespace std;

void reversearray(vector<int>&arr , int m){
    int s = m+1, e = arr.size()-1;

    while (s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    
}

void key(vector<int> m){
    cin>>m;
}

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;

    v.push_back(11);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(10);

    vector<int> ans = reversearray(v,m);
    cout<<"Printing Reverse Array";
    print(ans);
    return 0;
}