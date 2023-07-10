#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    cout<<endl<<"Inside the Function"<<endl;
    //updating arrays element
    arr[20] = 120;

    // Printing the array
    for (int  i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";

    }cout<<endl;

    cout<<"Going back to main function"<<endl;
}

int main(){
    int arr[3] = {1,2,3};
    update(arr,3);


    //Printing the array
    cout<<endl<<"Printing in Main Function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
    return 0;
}