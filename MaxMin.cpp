// This Program finds the Maximum and Minimum Element in an Array


#include<iostream>
using namespace std;

int getMax(int num[],int n)
{
    int maxi =  INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,num[i]) ; // pre-defined function used here for calculate maximum
    
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
                
    }
    
    // return max value
    return maxi;
}
int getMin(int num[],int n)
{
    int mini =  INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini,num[i]) ; // pre-defined function used here for calculate minimum
        
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
                
    }
    
    // return max value
    return mini;
}

int main(){
    int size;
    cout<<"Enter size of Array"<<endl;
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        // taking input in array
        cin>>num[i];
    }

    cout<<"Maximum value is "<<getMax(num,size)<<endl;   
    cout<<"Minimum value is "<<getMin(num,size)<<endl;   
    return 0;
}