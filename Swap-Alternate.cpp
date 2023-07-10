#include<iostream>
using namespace std;

void PrintArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[],int size)
{
    for (int  i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}

int main(){
    int even[8] = {5,2,9,6,4,5,3,1};
    int odd[5] = {5,6,4,2,3};

    swapAlternate(even,8);
    PrintArray(even,8);
    cout<<endl;
    swapAlternate(odd,5);
    PrintArray(odd,5);

    return 0;
}